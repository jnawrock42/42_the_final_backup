/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:41:48 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/05 21:41:49 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (nbr > 0 && begin_list)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (begin_list)
		return (begin_list);
	else
		return (0);
}
