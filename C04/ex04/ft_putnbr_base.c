/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:17:15 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/18 10:36:54 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

void	print(char c)
{
	write(1, &c, 1);
}

bool	is_value_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

bool	is_base_valid(char *base)
{
	if (is_value_duplicate(base))
		return (true);
	while (*base)
	{
		if (*base == '\t' || *base == '\n' || *base == '\v' || *base == '\f'
			|| *base == '\r' || *base == ' ' || *base == '+' || *base == '-')
			return (true);
		base++;
	}
	return (false);
}

void	ft_convert(int number, char *base, int size)
{
	if (number == INT_MIN)
	{
		ft_convert(number / size, base, size);
		print((base[-(number % size)]));
		return ;
	}
	else if (number < 0)
	{
		print('-');
		ft_convert(-number, base, size);
		return ;
	}
	else if (number > size - 1)
		ft_convert(number / size, base, size);
	print((base[number % size]));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (size < 2 || is_base_valid(base))
		return ;
	ft_convert(nbr, base, size);
}
