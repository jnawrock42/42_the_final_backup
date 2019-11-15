/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 14:44:53 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/01 14:44:56 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'j')
			str[i] = str[i] + 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}

char	*upper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			str[i] = str[i] + 16;
		else if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	lower(str);
	upper(str);
	return (str);
}
