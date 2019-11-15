/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 21:02:33 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/27 23:08:32 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a > 1 && y > 1))
				ft_putchar('A');
			if ((a == x && b == 1 && a > 1) || (a == 1 && b == y && y > 1))
				ft_putchar('C');
			if (((a == 1 || a == x) && b != 1 && b != y))
				ft_putchar('B');
			if ((b == 1 || b == y) && (a > 1 && a < x))
				ft_putchar('B');
			if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			a++;
		}
		a = 1;
		ft_putchar('\n');
		b++;
	}
}
