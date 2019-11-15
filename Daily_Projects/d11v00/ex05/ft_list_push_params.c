/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:21:17 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/05 18:21:20 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*ptr;
	t_list	*new;
	int		i;

	i = 1;
	ptr = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = ptr;
		ptr = new;
		i++;
	}
	return (ptr);
}
