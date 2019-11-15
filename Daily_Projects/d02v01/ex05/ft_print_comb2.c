/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:36:33 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/24 18:33:27 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 00 - 1;
	while (++x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_putchar('0' + x / 10);
			ft_putchar('0' + x % 10);
			ft_putchar(' ');
			ft_putchar('0' + y / 10);
			ft_putchar('0' + y % 10);
			if (!(x == 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
	}
}
