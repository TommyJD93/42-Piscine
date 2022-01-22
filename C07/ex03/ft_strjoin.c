/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:28:41 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/20 13:28:43 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*join;
	int		y;

	join = malloc((size * (ft_strlen(sep))));
	i = 0;
	j = 0;
	y = 0;
	while (size > 1)
	{
		while (strs[i][j] != '\0')
			join[y++] = strs[i][j++];
		j = 0;
		while (size > 2 && sep[j] != 0)
			join[y++] = sep[j++];
		j = 0;
		size--;
		i++;
	}
	return (join);
}
