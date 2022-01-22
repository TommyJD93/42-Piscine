/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:25:37 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/22 13:32:41 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//watchout for some norm errors, the concept is correct tho

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include "ft_boolean.h"
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(x) (x % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

typedef int		t_bool;
#endif

#endif