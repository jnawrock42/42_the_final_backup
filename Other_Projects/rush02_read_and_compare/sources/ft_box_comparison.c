/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_box_comparison.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:25:33 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/10 22:25:35 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	make_boxes(int x, int y, char *str)
{
	/*
	char *gggg;


	gggg = rush00_4a(x, y);
	.... do shit .....
	free(gggg);

	[ YOU CAN NO LONGER USE gggg]
	*/
	ft_putstr("\ngiven box: \n");
	ft_putstr(str);
	ft_putstr("\nrush00_0: \n");
	ft_putstr(rush00_0a(x, y));
	ft_putstr("\nrush00_1: \n");
	ft_putstr(rush00_1a(x, y));
	ft_putstr("\nrush00_2: \n");
	ft_putstr(rush00_2a(x, y));
	ft_putstr("\nrush00_3: \n");
	ft_putstr(rush00_3a(x, y));
	ft_putstr("\nrush00_4: \n");
	ft_putstr(rush00_4a(x, y));
	ft_putstr("\n");
}
