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

#include "ft_header.h"

char	add_char2(int a, int b, int x, int y)
{
	if ((a == 1 || a == x) && b == 1)
		return ('A');
	if (((a == 1 || a == x) && b != 1 && b != y))
		return ('B');
	if ((b == 1 || b == y) && (a > 1 && a < x))
		return ('B');
	if (a > 1 && a < x && b > 1 && b < y)
		return (' ');
	if ((a == 1 || a == x) && b == y && b > 1)
		return ('C');
	return (0);
}

char	*rush00_2a(int x, int y)
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
			str[i] = add_char2(a, b, x, y);
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
