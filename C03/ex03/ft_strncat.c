/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:07:23 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/12 15:07:24 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*d;
	unsigned int		i;

	d = dest;
	i = 0;
	while (*d != '\0')
		d++;
	while ((*src != '\0') && (i < nb))
	{
		*d = *src;
		d++;
		src++;
		i++;
	}
	*d = '\0';
	return (dest);
}
