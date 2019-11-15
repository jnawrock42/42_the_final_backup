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
#define BUFFSIZE 10

int	main(int argc, char **argv)
{
	char	buf[BUFFSIZE + 1];
	int		fd;
	int		ret;

	if (argc == 1)
		return (ft_put_err_str("File name missing.\n"));
	else if (argc > 2)
		return (ft_put_err_str("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY, 444);
	if (fd == -1)
		return (ft_put_err_str("open() failed.\n"));
	while ((ret = read(fd, buf, BUFFSIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (ft_put_err_str("close() failed.\n"));
	return (0);
}
