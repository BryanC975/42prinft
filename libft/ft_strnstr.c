/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:19:29 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:44:07 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *need, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (need[i] == '\0')
	{
		return ((char *)stack);
	}
	while (stack[i] != '\0' && i < len)
	{
		while (stack[i + x] == need[x] && stack[i + x] != '\0' && (i + x) < len)
		{
			x++;
		}
		if (need[x] == '\0')
			return ((char *)stack + i);
		i++;
		x = 0;
	}
	return (0);
}
