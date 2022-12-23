/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:52 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:52 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = ft_strlen(dst);
	x = i;
	j = 0;
	if (dstsize <= x)
	{
		return (ft_strlen((char *)src) + dstsize);
	}
	while (src[j] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (x + ft_strlen((char *)src));
}
