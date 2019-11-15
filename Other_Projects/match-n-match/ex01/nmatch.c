/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 11:30:30 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/03 11:30:35 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 == '*' && *s2 == '*')
		return (match(s1 + 1, s2));
	else if (*s1 && *s2 == '*')
		return (match(s1 + 1, s2) + match(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}

int		nmatch(char *s1, char *s2)
{
	return (match(s1, s2));
}
