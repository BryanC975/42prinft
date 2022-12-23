/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:42 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:07 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	src2 = (unsigned char *)src;
	dest2 = dest;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
		while (n--)
			dest2[n] = src2[n];
	return (dest2);
}
