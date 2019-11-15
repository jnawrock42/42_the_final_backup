/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 20:05:41 by iacar             #+#    #+#             */
/*   Updated: 2019/11/13 20:05:44 by iacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*pipe_to_file(void)
{
	char	*tmpname;
	int		fd;
	char	ch;

	tmpname = "xyz.txt";
	fd = open(tmpname, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	while (read(STDIN_FILENO, &ch, 1) > 0)
		write(fd, &ch, 1);
	close(fd);
	return (tmpname);
}
