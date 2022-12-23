/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:18 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:44:11 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;

	s = (char *)s1;
	if (!s1 || !set)
		return (NULL);
	while (*s && ft_strchr(set, *s))
	{
		s++;
	}
	i = ft_strlen(s);
	while (i && ft_strrchr(set, s[i]))
	{
		i--;
	}
	return (ft_substr(s, 0, i + 1));
}
