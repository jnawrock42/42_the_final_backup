/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jk_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:14:59 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/05 11:15:07 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jk_header.h"
#include "./ex02/ft_btree.h"

void	print_tree(void *str)
{
	ft_putstr((char*)str);
	ft_putchar('\n');
}

int		main(void)
{
	t_btree *one;
	t_btree *two;
	t_btree *three;
	t_btree *four;
	t_btree *five;

	one = btree_create_node("one");
	two = btree_create_node("two");
	three = btree_create_node("three");
	four = btree_create_node("four");
	five = btree_create_node("five");
	one->left = two;
	one->right = three;
	two->left = four;
	two->right = five;
	btree_apply_suffix(one, &print_tree);
	return (0);
}
