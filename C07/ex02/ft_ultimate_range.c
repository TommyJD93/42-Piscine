/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:28:19 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/20 13:28:21 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int	i;
	int	size;

	size = max - min;
	if (size > 2147483647)
		return (-1);
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (-1);
	while (i < size)
	{
		str[i] = min + i;
		i++;
	}
	*range = str;
	return (i);
}
