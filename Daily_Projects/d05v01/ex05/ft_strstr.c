/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:10:41 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/29 14:10:44 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (*str == to_find[i] || to_find[i] == '\0')
		{
			if (to_find[i] == '\0')
				return (str - i);
			if (*str != to_find[i])
				break ;
			str++;
			i++;
		}
		str = str - i;
		str++;
	}
	return (str);
}
