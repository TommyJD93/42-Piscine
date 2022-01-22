/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:01:02 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/22 14:01:36 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_digit(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
		return ;
	}
	if (n < 10)
	{
		ft_print_digit(n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_print_digit(n % 10);
	}
}

void	ft_show_tab(struct s_stock_str *tab)
{
	int			i;
	t_stock_str	str;

	i = 0;
	while (((t_stock_str*)tab)[i].str)
	{
		str = ((t_stock_str*)tab)[i];
		ft_putstr(str.str);
		ft_putstr("\n");
		ft_putnbr(str.size);
		ft_putstr("\n");
		ft_putstr(str.copy);
		ft_putstr("\n");
		i++;
	}
}