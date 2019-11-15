/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:25:59 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/07 15:26:01 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_buggy_input(void)
{
	char buf;

	while (read(1, &buf, 1) != 0)
		write(0, &buf, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_buggy_input();
	while (i < argc)
	{
		if (ft_display_file(argv[i]) > 0)
			return (1);
		i++;
	}
	return (0);
}
