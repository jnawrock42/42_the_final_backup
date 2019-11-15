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

#include "ft_header.h"

char	add_char3(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == 1 && b == y))
		return ('A');
	if (((a == 1 || a == x) && b != 1 && b != y))
		return ('B');
	if ((b == 1 || b == y) && (a > 1 && a < x))
		return ('B');
	if (a > 1 && a < x && b > 1 && b < y)
		return (' ');
	if (a == x && b == 1 && a > 1)
		return ('C');
	if (a == x && b == y && a > 1 && b > 1)
		return ('C');
	return (0);
}

char	*rush00_3a(int x, int y)
{
	int		a;
	int		b;
	int		i;
	char	str[(x * y) + 1];
	char	*str2;

	b = 1;
	i = 0;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			str[i] = add_char3(a, b, x, y);
			i++;
			a++;
		}
		i++;
		str[i] = '\n';
		b++;
	}
	str2 = str;
	return (str2);
}
