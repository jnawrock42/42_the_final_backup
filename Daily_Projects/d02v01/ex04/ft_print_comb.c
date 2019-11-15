/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 01:17:04 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/24 16:52:57 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = a;
		while (++b <= '9')
		{
			c = b;
			while (++c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (!(a == '7'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
