#include "exam_header.h"

void			print_bits(unsigned char octet)
{
	int				shift;
	char			c;
	unsigned char	mask;

	shift = 7;
	mask = 0b00000001;
	while (shift >= 0)
	{
		c = (((octet >> shift) & mask) + '0');
		write(1, &c, 1);
		shift--;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	new;

	new = 0b00000000;
	new = new | ((octet & 1) << 7);
	new = new | ((octet & 2) << 5);
	new = new | ((octet & 4) << 3);
	new = new | ((octet & 8) << 1);
	new = new | ((octet & 16) >> 1);
	new = new | ((octet & 32) >> 3);
	new = new | ((octet & 64) >> 5);
	new = new | ((octet & 128) >> 7);
	return (new);
}

int				main(void)
{
	unsigned char	given;

	given = 16;
	ft_putstr("\nGiven bits:");
	print_bits(given);
	ft_putstr("\n\n    Output:");
	print_bits(reverse_bits(given));
	ft_putstr("\n\n  Out char:");
	ft_putchar(reverse_bits(given));
	ft_putstr("\n\n");
	return (0);
}