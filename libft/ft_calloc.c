/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:46:55 by bcaguana          #+#    #+#             */
/*   Updated: 2022/10/15 13:42:05 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//la memoria se asigna para contar objetos del tamaño de bytes de memoria
void	*ft_calloc(size_t num, size_t size)
{
	void	*longitud;
	size_t	i;

	i = 0;
	longitud = malloc(num * size);
	if (longitud == NULL)
		return (NULL);
	while (i <= (num * size))
	{
		((char *)longitud)[i] = 0;
		i++;
	}
	return (longitud);
}
