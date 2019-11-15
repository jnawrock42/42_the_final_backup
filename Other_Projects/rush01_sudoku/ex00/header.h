/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 12:07:05 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/03 12:07:17 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_strlen(char *str);
int		sudoku(char **table);
int		ft_putstr(char *str1);
void	board_printer(char **argv);
int		sudoku_rev(char **table_rev);
int		check_input(int argc, char **argv);
int		is_completed(char **grid, int *a, int *b);
int		is_okay(char **table, int a, int b, char number);

#endif
