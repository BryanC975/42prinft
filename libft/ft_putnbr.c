/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:23 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/21 16:32:34 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb)
{
	unsigned int	nbr;

	nbr = 0;
	if (nb == -2147483648)
	{
		nbr += ft_putchar('-');
		nbr += ft_putchar('2');
		nbr += ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = -nb;
		nbr += ft_putchar('-');
		nbr += ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		nbr += ft_putnbr(nb / 10);
		nbr += ft_putnbr(nb % 10);
	}
	else
		nbr += ft_putchar(nb + '0');
	return (nbr);
}
