/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:26:49 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/28 18:04:19 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int out;
	int sign;

	out = 0;
	sign = 1;
	while (*str && (*str <= ' ' || *str == '+'))
		++str;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		out = (*str - '0') + (out * 10);
		++str;
	}
	return (out * sign);
}
