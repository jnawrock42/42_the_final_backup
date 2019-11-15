/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:03:54 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/06 20:03:56 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str1);
int		ft_put_err_str(char *c);
int		ft_display_file(char *argv);

#endif
