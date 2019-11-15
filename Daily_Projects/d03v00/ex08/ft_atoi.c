/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:47:00 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/25 22:47:04 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_putnbr(int nb)
{
	long int lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = nb * -1;
	}
	if (lnb >= 10)
		ft_putnbr(lnb / 10);
	ft_putchar((lnb % 10) + '0');
}

int		ft_atoi(char *str)
{
	int out;
	int sign;

	out = 0;
	sign = 1;
	while (*str && *str <= ' ')
		++str;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		out = (*str - '0') + (out * 10);
		++str;
	}
	return (out * sign);
}

int		main(void)
{
	char	*test0;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;

	test0 = " - + 9.ox";
	test1 = "  s   -12386asdhf";
	test2 = "91-8 - q9824";
	test3 = "- 1233";
	test4 = "	 \n+-123";

	ft_putstr("0 Expected output: ");
	ft_putnbr(atoi(test0));
	ft_putstr("\n0       My output: ");
	ft_putnbr(ft_atoi(test0));
	ft_putstr("\n\n1 Expected output: ");
	ft_putnbr(atoi(test1));
	ft_putstr("\n1       My output: ");
	ft_putnbr(ft_atoi(test1));
	ft_putstr("\n\n2 Expected output: ");
	ft_putnbr(atoi(test2));
	ft_putstr("\n2       My output: ");
	ft_putnbr(ft_atoi(test2));
	ft_putstr("\n\n3 Expected output: ");
	ft_putnbr(atoi(test3));
	ft_putstr("\n3       My output: ");
	ft_putnbr(ft_atoi(test3));
	ft_putstr("\n\n4 Expected output: ");
	ft_putnbr(atoi(test4));
	ft_putstr("\n4       My output: ");
	ft_putnbr(ft_atoi(test4));
	ft_putstr("\n\n");
}
