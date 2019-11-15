/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:43:42 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/01 22:43:44 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(char *str)
{
	int in_out;
	int count;

	in_out = 0;
	count = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
		{
			in_out = 0;
		}
		else if (in_out == 0)
		{
			in_out = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char **ft_split_whitespaces(char *str)
{
	char **out;
	int wc;

	wc = count_words(*str);
}
