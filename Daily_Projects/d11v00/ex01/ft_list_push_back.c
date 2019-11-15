/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:38:18 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/05 13:38:22 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list)
	{
		new = *begin_list;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
