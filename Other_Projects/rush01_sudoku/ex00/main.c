/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 11:14:44 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/03 20:03:17 by iacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAGIC_MALLOC 91
#define MAGIC_X_Y_VAL 9
#include "header.h"

int		check_initial_array(char **table)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			temp = table[i][j];
			table[i][j] = '.';
			if (!(is_okay(table, i, j, temp) || temp == '.'))
			{
				ft_putstr("Error\n");
				return (0);
			}
			table[i][j] = temp;
			j++;
		}
		i++;
	}
	return (1);
}

int		check_tables(char **table, char **table_rev)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (!(table[i][j] == table_rev[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**memory_allocation(char **argv)
{
	int		i;
	int		j;
	char	**table;

	i = 0;
	table = (char **)malloc(sizeof(char *) * MAGIC_MALLOC);
	while (i < MAGIC_X_Y_VAL)
	{
		j = 0;
		table[i] = (char *)malloc(sizeof(char) * (MAGIC_X_Y_VAL + 1));
		while (j < MAGIC_X_Y_VAL)
		{
			table[i][j] = argv[i + 1][j];
			j++;
		}
		i++;
	}
	return (table);
}

int		main(int argc, char *argv[])
{
	char	**table;
	char	**table_rev;
	int temp1;
	int temp2;

	if (!(check_input(argc, argv)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	table = memory_allocation(argv);
	table_rev = memory_allocation(argv);
	if (!check_initial_array(table))
		return (0);
	temp1 = sudoku(table);
	temp2 = sudoku_rev(table_rev);
	if (check_tables(table, table_rev) && temp1 == temp2)
		board_printer(table);
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (0);
}
