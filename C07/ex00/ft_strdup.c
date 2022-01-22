/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:27:51 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/20 13:27:51 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*(str++) != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen (src) + 1);
	if (dest == 0)
		return (0);
	dest = ft_strcpy(dest, src);
	return (dest);
}
