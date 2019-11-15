#include "exam_header.h"

void	print_bits(unsigned char octet)
{
	int				i;
	char			c;
	unsigned char	mask;

	i = 7;
	mask = 0b00000001;
	while (i >= 0)
	{
		c = (((octet >> i) & mask) + '0');
		write(1, &c, 1);
		i--;
	}
}

int		main(void)
{
	unsigned char	given;

	given = 'Z';
	print_bits(given);
	ft_putstr("\n");
}