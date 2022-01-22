/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:28:53 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/20 13:28:56 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;
	int	size;

	if (min >= max)
	{
		str = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (0);
	while (i < size)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
