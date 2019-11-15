/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:57:32 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/26 13:24:28 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_strlen(char *str);
char *ft_strrev(char *str);

int main(void)
{
	char strt[] = "hello";
	char *str;

	str = strt;
//	str = "original str is: ";
//	ft_putstr(str);
//	str = "hello";
//	ft_putstr(str);
//	ft_putchar('\n');
//function start
	ft_putstr(ft_strrev(str));
//function end
	str = " is reversed.";
	ft_putstr(str);
	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}

	ft_putchar((nb % 10) + '0');
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

// submitted

char *ft_strrev(char *str)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	l = i - 1;

	char str2[l];

	while (j <= l)
	{
		str2[j] = str[i];
		j++;
		i--;
		ft_putchar('1');
	}
	str = str2;
	return (str);
}
