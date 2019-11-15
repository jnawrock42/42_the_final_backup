/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbienkow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:06:34 by bbienkow          #+#    #+#             */
/*   Updated: 2019/10/27 16:26:00 by bbienkow         ###   ########.fr       */
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
			if ((a == 1 || a == x) && b == 1)
				ft_putchar('A');
			if (((a == 1 || a == x) && b != 1 && b != y))
				ft_putchar('B');
			if ((b == 1 || b == y) && (a > 1 && a < x))
				ft_putchar('B');
			if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			if ((a == 1 || a == x) && b == y && b > 1)
				ft_putchar('C');
			a++;
		}
		a = 1;
		ft_putchar('\n');
		b++;
	}
}
