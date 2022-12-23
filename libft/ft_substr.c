/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:47:51 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:44:14 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*m;

	if (s == 0)
	{
		return (NULL);
	}
	if (start > (unsigned int)ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	i = ft_strlen(s + start);
	if (i < len)
	{
		len = i;
	}
	m = (char *)malloc((len + 1) * sizeof(char));
	if (m == 0)
	{
		return (NULL);
	}
	ft_strlcpy(m, s + start, len + 1);
	return (m);
}
