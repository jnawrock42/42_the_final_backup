/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reading_stuff.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:18:14 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/10 22:18:15 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	dimensions(char *str)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] != '\n')
	{
		x++;
		i++;
	}
	x++;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	make_boxes(x, y, str);
}

void	input_to_str(t_list *head, int i)
{
	char	temp[i];
	char	*str;
	t_list	*willy;

	str = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (head->next != NULL)
	{
		temp[i] = head->data;
		i++;
		willy = head;
		head = head->next;
		free(willy);
	}
	temp[i] = '\0';
	str = temp;
	dimensions(str);
}

void	read_input(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*new1;
	char	c;
	int		i;

	i = 0;
	new = ft_create_elem('\0');
	head = new;
	while (read(0, &c, 1))
	{
		new->data = c;
		new1 = ft_create_elem('\0');
		new->next = new1;
		new = new->next;
		i++;
	}
	input_to_str(head, i);
}
