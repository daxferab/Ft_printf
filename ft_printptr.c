/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferab <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:14:27 by daxferab          #+#    #+#             */
/*   Updated: 2024/05/24 17:33:34 by daxferab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(size_t ptr)
{
	int	bytes;

	bytes = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	bytes += write(1, "0x", 2);
	bytes += ft_printhex(ptr, "0123456789abcdef");
	return (bytes);
}
