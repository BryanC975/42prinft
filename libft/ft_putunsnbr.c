/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:31 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/09 16:41:43 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsnbr(unsigned int nb)
{
	unsigned int	nbr;

	nbr = 0;
	if (nb >= 10)
	{
	nbr += ft_putunsnbr(nb / 10);
	nbr += ft_putunsnbr(nb % 10);
	}
	else
		nbr += ft_putchar(nb + '0');
	return (nbr);
}
