#!/usr/bin/perl -wT

use strict;
use CGI;
use CGI::Carp qw ( fatalsToBrowser );
use File::Basename;

$CGI::POST_MAX = 1024 * 20000;
my $safe_filename_characters = "a-zA-Z0-9_.-";
my $upload_dir = "../Documents/uploaded_for_decoding";
my $code_dir = "../Documents/decoded_files";

my $query = new CGI;
my $filename = $query->param("fil");

if ( !$filename )
{
 print $query->header ( );
 print "There was a problem uploading your file (try a smaller one).";
 exit;
}

my ( $name, $path, $extension ) = fileparse ( $filename, '\..*' );
$filename = $name . $extension;
$filename =~ tr/ /_/;
$filename =~ s/[^$safe_filename_characters]//g;

if ( $filename =~ /^([$safe_filename_characters]+)$/ )
{
 $filename = $1;
}
else
{
 die "Filename contains invalid characters";
}

my $upload_filehandle = $query->upload("fil");

open ( UPLOADFILE, ">$upload_dir/$filename" ) or die "$!";
binmode UPLOADFILE;

while ( <$upload_filehandle> )
{
 print UPLOADFILE;
}

close UPLOADFILE;

print $query->header ( );



$ENV{'PATH'} = '/Library/WebServer/CGI-Executables';
$path = $ENV{'PATH'};

system("unrar x -inul \"$upload_dir/$filename\" \"$upload_dir/\"");

$filename =~ s/\.[^.]*$//;

system("numtoarg \"$upload_dir/$filename.txt\" \"$code_dir/$filename\"");


print <<ENDHTML;
<html>
<head>
<title>CGI Test</title>
</head>
<body>
<a href="http://localhost/decoded_files/$filename">Download decoded file</a>
</body>
</html>

ENDHTML
