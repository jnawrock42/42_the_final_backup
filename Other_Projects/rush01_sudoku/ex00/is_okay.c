/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_okay.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:55:25 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/03 14:55:29 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putstr(char *str1);

int		check_rows(char **table, int a, char number)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (table[a][i] == number)
			return (0);
		i++;
	}
	return (1);
}

int		check_columns(char **table, int b, char number)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (table[i][b] == number)
			return (0);
		i++;
	}
	return (1);
}

int		check_boxes(char **table, int a, int b, char number)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (table[i + 3 * a][j + 3 * b] == number)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_okay(char **table, int a, int b, char number)
{
	int i;

	i = 0;
	i = i + check_rows(table, a, number);
	i = i + check_columns(table, b, number);
	i = i + check_boxes(table, a / 3, b / 3, number);
	if (i == 3)
		return (1);
	else
		return (0);
}
