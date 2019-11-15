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

#include "ft_header.h"

char	add_char0(int a, int b, int x, int y)
{
	if ((a == 1 || a == x) && (b == 1 || b == y))
		return ('o');
	if (((a == 1 || a == x) && b != 1 && b != y))
		return ('|');
	if ((b == 1 || b == y) && (a > 1 && a < x))
		return ('-');
	if (a > 1 && a < x && b > 1 && b < y)
		return (' ');
	else
		return (0);
}

char	*rush00_0a(int x, int y)
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
			str[i] = add_char0(a, b, x, y);
			i++;
			a++;
		}
		i++;
		str[i] = '\n';
		b++;
	}
	i++;
	str[i] = '\0';
	str2 = str;
	return (str2);
}
