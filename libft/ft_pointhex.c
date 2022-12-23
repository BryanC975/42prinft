/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:57:23 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/21 18:54:29 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_longhex(unsigned long nbr, char *base)
{
	int	i;
	int	numhex;
	int	nbr_hex[100];

	i = 0;
	numhex = 0;
	if (nbr == 0)
		numhex += ft_putchar('0');
	while (nbr)
	{
		nbr_hex[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
	{
		numhex += ft_putchar(base[nbr_hex[i]]);
	}
	return (numhex);
}

int	ft_pointhex(unsigned long ptr)
{
	int	punthex;

	punthex = 0;
	punthex += write(1, "0x", 2);
	if (!ptr)
		punthex += write(1, "0", 1);
	else
		punthex += ft_longhex(ptr, "0123456789abcdef");
	return (punthex);
}
