/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:28 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/21 18:49:39 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	if (str)
		return (write(1, str, ft_strlen(str)));
	return (ft_strlen(str));
}
