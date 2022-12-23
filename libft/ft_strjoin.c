/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:12 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:42 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	char	*m;

	m = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char)));
	i = 0;
	x = 0;
	if (m == 0)
	{
		return (NULL);
	}
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		m[i + x] = s2[x];
		x++;
	}
	m[i + x] = '\0';
	return (m);
}
