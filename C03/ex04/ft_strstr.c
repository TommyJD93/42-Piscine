/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:07:43 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/12 15:07:44 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*search_in;
	char	*to_search;

	to_search = to_find;
	search_in = str;
	while (true)
	{
		if (*to_search == '\0')
			return ((char *)(search_in - (to_search - to_find)));
		if (*search_in == *to_search)
			to_search++;
		else
			to_search = to_find;
		if (*search_in == '\0')
			break ;
		search_in++;
	}
	return (0);
}
