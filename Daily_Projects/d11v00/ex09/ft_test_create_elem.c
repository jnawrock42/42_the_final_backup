/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:53:20 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/05 10:53:22 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_create_elem(void *data)
{
	t_list			*item;

	item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}
