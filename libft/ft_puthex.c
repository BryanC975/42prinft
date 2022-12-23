/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:48:16 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/21 18:52:22 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int nbr, char *base)
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
