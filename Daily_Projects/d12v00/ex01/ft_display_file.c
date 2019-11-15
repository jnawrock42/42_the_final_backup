/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:37:11 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/06 20:37:13 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#define BUFFSIZE 29000

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar((num % 10) + '0');
}

int		ft_put_err_str(char *c)
{
	write(2, c, ft_strlen(c));
	return (1);
}

int		ft_error_printer(char *argv, int errnb)
{
	ft_put_err_str("cat: ");
	ft_put_err_str(argv);
	if (errnb == 2)
		ft_put_err_str(": No such file or directory\n");
	if (errnb == 13)
		ft_put_err_str(": Permission denied\n");
	if (errnb == 21)
		ft_put_err_str(": Is a directory\n");
	return (1);
}

int		ft_display_file(char *argv)
{
	char	buf[BUFFSIZE + 1];
	int		fd;
	int		ret;
	int		errnb;

	fd = open(argv, O_RDWR);
	if (fd == -1)
	{
		errnb = errno;
		ft_error_printer(argv, errnb);
		return (errnb);
	}
	while ((ret = read(fd, buf, BUFFSIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (ft_put_err_str("close() failed.\n"));
	return (0);
}
