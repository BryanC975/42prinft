/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:40 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:04 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;

	src2 = (const unsigned char *)src;
	dst2 = (unsigned char *)dst;
	if ((dst == '\0' && src == '\0') || !n)
		return (dst);
	while (n > 0)
	{
		*dst2 = *src2;
		dst2++;
		src2++;
		n--;
	}
	return (dst);
}
