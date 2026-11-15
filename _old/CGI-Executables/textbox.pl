#!/usr/bin/perl -wT

use CGI;
use CGI::Carp qw ( fatalsToBrowser );
use File::Basename;

$CGI::POST_MAX = 1024 * 20000; # 20 MB
my $safe_filename_characters = "a-zA-Z0-9_.-";
my $upload_dir = "../Documents/textbox";

my $query = new CGI;
my $filename = "file.txt";

my $upload_filehandle = $query->param("comments");

open ( UPLOADFILE, ">$upload_dir/$filename" ) or die "$!";
binmode UPLOADFILE;
print UPLOADFILE $upload_filehandle;
close UPLOADFILE;

print $query->header ( );

$ENV{'PATH'} = '/Library/WebServer/CGI-Executables';
$path = $ENV{'PATH'};

system("unic1253 $upload_dir/$filename");
system("grnum");

my $file = "grcode.txt";
open(INFO, $file);	# Open the file
@lines = <INFO>;	# Read it into an array
close(INFO);		# Close the file
print @lines;		# Print the array

