/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeparams.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:27:46 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/22 16:21:29 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_listparam(char const *str, int elems, int i, va_list params)
{
	if (str[i + 1] == '%')
		elems += ft_putchar('%');
	if (str[i + 1] == 'c')
		elems += ft_putchar(va_arg(params, int));
	if (str[i + 1] == 'i' || str[i + 1] == 'd')
		elems += ft_putnbr(va_arg(params, int));
	if (str[i + 1] == 's')
		elems += ft_putstr(va_arg(params, char *));
	if (str[i + 1] == 'x')
		elems += ft_puthex(va_arg(params, int), "0123456789abcdef");
	if (str[i + 1] == 'u')
		elems += ft_putunsnbr(va_arg(params, unsigned int));
	if (str[i + 1] == 'X')
		elems += ft_puthex(va_arg(params, int), "0123456789ABCDEF");
	if (str[i + 1] == 'p')
		elems += ft_pointhex(va_arg(params, size_t));
	return (elems);
}

int	ft_putparams(char const *str, int elems, va_list params)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
				elems = ft_listparam(str, elems, i, params);
				i++;
		}
		else
				elems += write (1, &str[i], 1);
		i++;
	}
	return (elems);
}
