/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 11:21:09 by ddang             #+#    #+#             */
/*   Updated: 2019/11/03 19:08:57 by iacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		sudoku(char **table)
{
	int		a;
	int		b;
	char	i;

	if (is_completed(table, &a, &b))
		return (1);
	i = '1';
	while (i <= '9')
	{
		if (is_okay(table, a, b, i))
		{
			table[a][b] = i;
			if (sudoku(table))
				return (1);
			table[a][b] = '.';
		}
		i++;
	}
	return (0);
}

int		sudoku_rev(char **table)
{
	int		a;
	int		b;
	char	i;

	if (is_completed(table, &a, &b))
		return (1);
	i = '9';
	while (i >= '1')
	{
		if (is_okay(table, a, b, i))
		{
			table[a][b] = i;
			if (sudoku_rev(table))
				return (1);
			table[a][b] = '.';
		}
		i--;
	}
	return (0);
}
