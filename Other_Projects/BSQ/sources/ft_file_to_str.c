/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:14:26 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/12 11:14:27 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		find_num_cols(int fd, int *p)
{
	char	*buff;
	int		flag;
	int		columns;
	int		c;

	c = 0;
	columns = 0;
	flag = 0;
	buff = malloc(sizeof(char));
	while (read(fd, buff, 1))
	{
		if (buff[0] == '\n')
		{
			if (flag == 0)
				*p = c;
			flag++;
		}
		if (flag == 1)
			columns++;
		c++;
	}
	return (columns - 1);
}

int		find_num_rows(int fd, int a)
{
	char	*buff;
	char	*str;
	int		i;

	i = 0;
	buff = malloc(sizeof(char) * a);
	str = malloc(sizeof(char) * a + 1);
	read(fd, buff, a);
	while (buff[i] != '\0')
	{
		str[i] = buff[i];
		i++;
	}
	str[i] = '\0';
	return (ft_atoi(str));
}

char	*create_input_matrix(int fd, int columns, int rows, int pos_first_nl)
{
	char	*buff;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	buff = malloc(sizeof(char) * 1001);
	buff[1000 + 1] = '\0';
	str = malloc(sizeof(char) * columns * rows);
	read(fd, buff, pos_first_nl + 1);
	while (read(fd, buff, 1000))
	{
		while (buff[i] != '\0')
		{
			if (buff[i] == '\n')
				i++;
			str[j] = buff[i];
			i++;
			j++;
		}
		i = 0;
	}
	return (str);
}

int		file_to_str(char *argv_i)
{
	char	*array;
	int		pos_first_nl;
	int		fd;
	int		columns;
	int		rows;

	pos_first_nl = 0;
	fd = open(argv_i, O_RDONLY);
	columns = find_num_cols(fd, &pos_first_nl);
	close(fd);
	fd = open(argv_i, O_RDONLY);
	rows = find_num_rows(fd, pos_first_nl);
	close(fd);
	fd = open(argv_i, O_RDONLY);
	array = create_input_matrix(fd, columns, rows, pos_first_nl);
	close(fd);
	ft_solver(array, columns, rows, 1);
	return (0);
}
