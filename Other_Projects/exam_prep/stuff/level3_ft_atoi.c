//this is the one i was teaching Tornchay with but he went to bed and i needed to rewrite correctly

#include "exam_header.h"

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		out;
	int		sign;

	out = 0;
	sign = 1;
	while (*str && *str <= ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		out = (out * 10) + (*str - '0');
		str++;
	}
	return (out * sign);
}

int		main(void)
{
	char	*test0;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;

	test0 = "--31";
	test1 = "my";
	test2 = "good";
	test3 = "mellow";
	test4 = "fellow";

	ft_putstr("\n  My atoi: ");
	ft_putnbr(ft_atoi(test0));
	ft_putstr("\nReal atoi: ");
	ft_putnbr(atoi(test0));
	ft_putstr("\n\n");
	return (0);
}