/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 12:24:38 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/01 12:24:44 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*am_or_pm(int hour)
{
	if ((hour >= 0 && hour < 1200) || hour == 2400)
		return ("A.M.");
	else if (hour >= 1200)
		return ("P.M.");
	return (0);
}

int		time_converter(int hour)
{
	hour = hour / 100;
	if (hour > 0 && hour < 12)
		return (hour);
	else if (hour == 0 || hour == 12 || hour == 24)
		return (12);
	else
		return (hour - 12);
	return (0);
}

int		ft_takes_place(int hour)
{
	int		t1;
	int		t2;
	char	*aop1;
	char	*aop2;

	t1 = (hour / 100) * 100;
	t2 = ((hour / 100) + 1) * 100;
	if (t1 >= 2400 || (t2 - hour) < 41)
	{
		printf("INVALID TIME ENTERED\n");
		return (0);
	}
	aop1 = am_or_pm(t1);
	aop2 = am_or_pm(t2);
	t1 = time_converter(t1);
	t2 = time_converter(t2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s", t1, aop1);
	printf(" AND ");
	printf("%d.00 %s\n", t2, aop2);
	return (0);
}
