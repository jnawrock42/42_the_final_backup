/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:13:12 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/08 16:13:13 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(
t_btree **root,
void *item,
int (*cmpf)(void *, void *)
)
{
	t_btree	*ptr;

	ptr = *root;
	if (*cmpf(item, ptr) < 0)
	{
		if (ptr->left)
		{
			ptr = ptr->left;
			btree_insert_data(&ptr, item, *cmpf());
		}
		btree_create_node(item);
	}
	else
	{
		if (ptr->right)
		{
			ptr = ptr->right;
			btree_insert_data(&ptr, item, *cmpf());
		}
		btree_create_node(item);
	}
}
