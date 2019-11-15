/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_completed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 12:05:42 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/03 19:36:25 by iacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_okay(char **table, int a, int b, char number);

int		is_completed(char **table, int *a, int *b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (table[i][j] == '.')
			{
				*a = i;
				*b = j;
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
