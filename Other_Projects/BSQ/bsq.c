/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:07:27 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/11 16:07:36 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	piped_input(void)
{
	file_to_str(pipe_to_file());
}

void	file_input(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		file_to_str(argv[i]);
		i++;
	}
}

void	input_type(int argc, char **argv)
{
	if (argc < 2)
		piped_input();
	else
		file_input(argc, argv);
}

int		main(int argc, char **argv)
{
	input_type(argc, argv);
	return (0);
}
