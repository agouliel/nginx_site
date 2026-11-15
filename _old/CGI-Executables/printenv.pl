#!/usr/bin/perl
print "Content-type: text/html; charset=iso-8859-1\n\n";
print "<html>";
print "<body>";
foreach $var (sort(keys(%ENV))) {
    $val = $ENV{$var};
    $val =~ s|\n|\\n|g;
    $val =~ s|"|\\"|g;
    print "${var}=\"${val}\"\n";
}
print "</body>";
print "</html>";
