/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 12:27:18 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/03 13:57:24 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		j;
	int		i;
	bool	swapped;

	j = 0;
	while (true)
	{
		swapped = false;
		i = 0;
		while (i < size - 1 - j)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swapped = true;
			}
			i++;
		}
		j++;
		if (!swapped)
		{
			break ;
		}
	}
}
