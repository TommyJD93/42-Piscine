/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:32:44 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/05 17:26:47 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (true)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break ;
	}
	dest[i] = '\0';
	return (dest);
}
