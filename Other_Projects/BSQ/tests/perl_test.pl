#!/usr/bin/perl
# run by typing into terminal: perl perl_test.pl x y density
use warnings;
use strict;

die "Please program [x] [y] [density]." unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";

for (my $i = 0; $i < $y; $i++)
{
	for (my $j = 0; $j < $x; $j++)
	{
		if (int(rand($y) * 2) < $density)
		{
			print "o"; #obstacle
		}
		else
		{
			print "."; #empty space
		}
	}
	print "\n";
}