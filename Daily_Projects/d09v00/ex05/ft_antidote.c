/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:04:41 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/01 15:04:44 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i < j && i < k)
	{
		if (j < k)
			return (j);
		else
			return (k);
	}
	if (j < k && j < i)
	{
		if (k < i)
			return (k);
		else
			return (i);
	}
	if (k < j && k < i)
	{
		if (j < i)
			return (j);
		else
			return (i);
	}
	return (0);
}
