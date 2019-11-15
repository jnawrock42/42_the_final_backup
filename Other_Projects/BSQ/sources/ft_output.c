/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:35:44 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/30 15:35:46 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_puterrstr(char *str)
{
	int i;

	i = 0;
	while (*str)
		i++;
	write(0, str, i);
}

void	ft_print_matrix(char *arr, int size_x, int size_y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size_y)
	{
		j = 0;
		while (j < size_x)
		{
			write(1, &arr[size_x * i + j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
