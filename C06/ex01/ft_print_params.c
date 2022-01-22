/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:31:08 by ffrau             #+#    #+#             */
/*   Updated: 2021/10/18 10:33:28 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	l;
	int	i;

	i = 1;
	while (i < argc)
	{
		l = ft_strlen(argv[i]);
		write(1, argv[i], l);
		write(1, "\n", 1);
		i++;
	}
}
