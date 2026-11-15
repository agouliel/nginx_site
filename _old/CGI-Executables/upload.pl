#!/usr/bin/perl -wT 

use strict; 
use CGI; 
use CGI::Carp qw ( fatalsToBrowser ); 
use File::Basename; 

$CGI::POST_MAX = 1024 * 90000; 
my $safe_filename_characters = "a-zA-Z0-9_.-"; 
my $upload_dir = "/Library/WebServer/Documents/uploaded"; 

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
print <<END_HTML;
<html>
 <head> 
   <meta http-equiv="Content-Type" content="text/html; charset=utf-8" /> 
   <title>Thanks!</title> 
   <style type="text/css"> 
     img {border: none;} 
   </style> 
 </head> 
 <body> 
   <p>Thanks for uploading your file!</p> 
 </body> 
</html> 
END_HTML
