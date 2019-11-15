/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 20:23:26 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/27 23:15:08 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

	b = 0;
	while (++b <= y)
	{
		a = 0;
		while (++a <= x)
		{
			if ((a == 1 && b == 1) || (a == 1 && b == y))
				ft_putchar('A');
			if (((a == 1 || a == x) && b != 1 && b != y))
				ft_putchar('B');
			if ((b == 1 || b == y) && (a > 1 && a < x))
				ft_putchar('B');
			if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			if (a == x && b == 1 && a > 1)
				ft_putchar('C');
			if (a == x && b == y && a > 1 && b > 1)
				ft_putchar('C');
		}
		ft_putchar('\n');
	}
}
