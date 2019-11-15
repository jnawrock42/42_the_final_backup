/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 00:43:04 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/06 00:43:07 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*past;
	t_list	*present;
	t_list	*future;

	past = NULL;
	present = begin_list;
	future = NULL;
	while (present != NULL)
	{
		future = present->next;
		present->next = past;
		past = present;
		present = future;
	}
	begin_list = past;
}
