/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:07:25 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:35 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*t;
	size_t	l;
	size_t	x;

	s = (char *)s1;
	x = 0;
	l = ft_strlen((char *)s1) + 1;
	t = (char *)malloc(l * sizeof(char));
	if (t == 0)
	{
		return (0);
	}
	while (x < l)
	{
		t[x] = s[x];
		x++;
	}
	t[x] = '\0';
	return (t);
}
