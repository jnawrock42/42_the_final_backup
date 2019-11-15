/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:06:13 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/30 19:06:17 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *str1);
int		ft_strcmp(char *s1, char *s2);
int		ft_swap(char **c);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i > 0 && argc > 2)
	{
		i = ft_swap(argv);
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str1)
{
	while (*str1)
	{
		ft_putchar(*str1);
		str1++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i])
			break ;
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_swap(char **c)
{
	int		j;
	char	*temp;

	j = 1;
	while (c[j + 1] != '\0')
	{
		if (ft_strcmp(c[j + 1], c[j]) >= 0)
		{
			j++;
		}
		else
		{
			temp = c[j + 1];
			c[j + 1] = c[j];
			c[j] = temp;
			j = 1;
		}
	}
	return (0);
}
