/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:09:42 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/11 16:09:46 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		min(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	else if (b < c)
		return (b);
	else
		return (c);
}

int		ft_solver(char *matrix, int size_x, int size_y, int i)
{
	int		*dup;
	int		j;
	int		pos;
	int		max;

	dup = malloc(sizeof(int) * (size_x * size_y) + 1);
	dup[(size_x * size_y + 1)] = -1;
	while (i < size_y)
	{
		j = 1;
		while (j <= size_x)
		{
			if (matrix[(i - 1) * size_x + j - 1] == '.')
				dup[i * size_x + j] = (min(dup[(i - 1) * size_x + j],
					dup[(i) * size_x + j - 1],
						dup[(i - 1) * size_x + j - 1]) + 1);
			j++;
		}
		i++;
	}
	max = find_max_value(dup, &pos);
	update_matrix(matrix, pos, max, size_x);
	ft_print_matrix(matrix, size_x, size_y);
	return (0);
}

int		find_max_value(int *dup, int *pos)
{
	int counter;
	int max;

	counter = 0;
	max = 0;
	while (dup[counter] != -1)
	{
		if (dup[counter] > max)
		{
			max = dup[counter];
			*pos = counter;
		}
		counter++;
	}
	return (max);
}

void	update_matrix(char *matrix, int pos, int size, int size_x)
{
	int i;
	int j;
	int c;
	int c2;

	c = 0;
	i = pos / size_x;
	while (c < size)
	{
		c2 = 0;
		j = pos % size_x;
		while (c2 < size)
		{
			matrix[(i - 1) * size_x + j - 1] = 'x';
			j--;
			c2++;
		}
		i--;
		c++;
	}
}
