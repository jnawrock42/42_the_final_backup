/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:31:02 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/10 21:31:05 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00_0(int x, int y);
void	rush00_1(int x, int y);
void	rush00_2(int x, int y);
void	rush00_3(int x, int y);
void	rush00_4(int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	rush00_0(5, 5);
	return (0);
}

void	rush00_0(int x, int y)
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

void	rush00_1(int x, int y)
{
	int a;
	int b;

	b = 0;
	while (++b <= y)
	{
		a = 0;
		while (++a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a > 1 && y > 1))
				ft_putchar('/');
			if ((a == x && b == 1 && a > 1) || (a == 1 && b == y && y > 1))
				ft_putchar('\\');
			if (((a == 1 || a == x) && b != 1 && b != y))
				ft_putchar('*');
			if ((b == 1 || b == y) && (a > 1 && a < x))
				ft_putchar('*');
			if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush00_2(int x, int y)
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

void	rush00_3(int x, int y)
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

void	rush00_4(int x, int y)
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
