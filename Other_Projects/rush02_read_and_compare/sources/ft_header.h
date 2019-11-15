/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:39:23 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/09 16:39:24 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				make_boxes(int x, int y, char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str1);
void				read_input(void);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlen(char *str);
char				*rush00_0a(int a, int b);
char				*rush00_1a(int a, int b);
char				*rush00_2a(int a, int b);
char				*rush00_3a(int a, int b);
char				*rush00_4a(int a, int b);

#endif
