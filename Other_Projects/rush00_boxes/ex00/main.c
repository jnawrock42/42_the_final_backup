/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 12:33:23 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/27 23:18:30 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int a, int b);
void	ft_putchar(char c);

int		main(void)
{
	rush(1, 1);
	ft_putchar('\n');
	rush(2, 2);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(5, 5);
	return (0);
}
