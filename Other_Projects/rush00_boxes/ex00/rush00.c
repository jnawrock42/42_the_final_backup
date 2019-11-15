/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 19:04:24 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/27 19:04:32 by jnawrock         ###   ########.fr       */
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
			if ((a == 1 || a == x) && (b == 1 || b == y))
				ft_putchar('o');
			if (((a == 1 || a == x) && b != 1 && b != y))
				ft_putchar('|');
			if ((b == 1 || b == y) && (a > 1 && a < x))
				ft_putchar('-');
			if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			a++;
		}
		a = 1;
		ft_putchar('\n');
		b++;
	}
}
