/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:27:42 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/22 16:49:47 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		elems;
	va_list	params;

	elems = 0;
	va_start (params, str);
	elems = ft_putparams(str, elems, params);
	va_end (params);
	return (elems);
}
