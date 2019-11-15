/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:18:17 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/08 11:18:19 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*btn;

	btn = (t_btree *)malloc(sizeof(t_btree));
	if (btn)
	{
		btn->left = 0;
		btn->right = 0;
		btn->item = item;
	}
	return (btn);
}
