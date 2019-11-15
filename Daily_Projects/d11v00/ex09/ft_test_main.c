/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:24:36 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/05 16:24:44 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_reverse(t_list **begin_list);

int		main(void)
{
	t_list **ptr;
	t_list *a;

	a = 0;
	*ptr = a;
	printf("+\nvvvvvvvvvvvvvvvvvvv\nProgram starts.\n+\n");
	a = ft_create_elem("hello");
	a->next = ft_create_elem("my");
	a->next->next = ft_create_elem("good");
	a->next->next->next = ft_create_elem("mellow");
	a->next->next->next->next = ft_create_elem("fellow");
	ft_list_reverse(**ptr)
	
	printf("\n+\nProgram ends.\n^^^^^^^^^^^^^^^^^^^\n+\n");
	return (0);
}
