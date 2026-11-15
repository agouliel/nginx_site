#!/usr/bin/perl -wT

use strict;
use CGI;
use CGI::Carp qw ( fatalsToBrowser );
use File::Basename;

$CGI::POST_MAX = 1024 * 30000;
my $safe_filename_characters = "a-zA-Z0-9_.-";
my $upload_dir = "/Library/WebServer/Documents/uploaded";
my $code_dir = "/Library/WebServer/Documents/codes";

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

system("argtonum \"$upload_dir/$filename\" \"$code_dir/$filename.txt\"");
system("rar a -inul -ep \"$code_dir/$filename.zip\" \"$code_dir/$filename.txt\"");


print <<ENDHTML;
<html>
<head>
<title>OK</title>
</head>
<body>
<a href="http://agou.homeftp.net/codes/$filename.zip">Download</a>
</body>
</html>

ENDHTML
