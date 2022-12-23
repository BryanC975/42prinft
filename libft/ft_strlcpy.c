/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:55 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:54 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	if (destsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < destsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
