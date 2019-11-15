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

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdint.h>
# include <time.h>
# include <inttypes.h>
# include <sys/types.h>
# include <sys/stat.h>

# define BUFF_SIZE 1024

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		ft_intlen(int *str);
int		ft_strlen(char *str);
void	ft_puterrstr(char *str);
int		file_to_str(char *argv_i);
int		find_num_rows(int fd, int a);
int		find_num_cols(int fd, int *p);
int		ft_strcmp(char *s1, char *s2);
int		ft_solver(char *matrix, int size_x, int size_y, int i);
void	ft_print_matrix(char *arr, int size_x, int size_y);
void	ft_print_script_output(int *arr, int size_x, int size_y);
int		ft_intlen(int *str);
int		find_max_value(int *dup, int *pos);
void	update_matrix(char *matrix, int pos, int size, int size_x);
char	*pipe_to_file(void);

#endif
