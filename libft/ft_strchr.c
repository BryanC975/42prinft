/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:47 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:43:31 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	int		i;
	char	*str;

	str = (char *)s;
	cc = c;
	i = 0;
	while (str[i] != cc)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (str + i);
}
