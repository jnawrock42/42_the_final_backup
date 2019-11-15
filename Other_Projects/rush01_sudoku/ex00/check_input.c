/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 12:06:30 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/03 12:06:31 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_putstr(char *str1);

int		count_dots(char **argv)
{
	int i;
	int j;
	int counter;

	counter = 0;
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				counter++;
			j++;
		}
		i++;
	}
	if (counter >= 64)
		return (0);
	else
		return (1);
}

int		check_input(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
		return (0);
	if (!count_dots(argv))
		return (0);
	while (i < argc)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		j = 0;
		while (j < 9)
		{
			if ((argv[i][j] > '0' && argv[i][j] <= '9') || argv[i][j] == '.')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
