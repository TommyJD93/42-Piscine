/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:34:12 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/07 12:20:28 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}