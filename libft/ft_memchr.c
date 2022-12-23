/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:34 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:42:57 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (*str == cc)
		{
			return (str);
		}
		i++;
		str++;
	}
	return (NULL);
}
