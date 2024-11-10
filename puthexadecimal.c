/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:08:52 by aalmahas          #+#    #+#             */
/*   Updated: 2024/09/30 13:13:19 by aalmahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long num, char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x' || format == 'p')
	{
		base = "0123456789abcdef";
	}
	else
	{
		base = "0123456789ABCDEF";
	}
	if (num >= 16)
	{
		len += ft_puthexa(num / 16, format);
	}
	len += ft_putchar(base[num % 16]);
	return (len);
}

int	ft_putpointer(void *ptr)
{
	unsigned long	address;
	int				length;

	address = (unsigned long)ptr;
	length = 0;
	if (!ptr)
	{
		length += ft_putstr("(nil)");
	}
	else
	{
		length += ft_putstr("0x");
		length += ft_puthexa(address, 'p');
	}
	return (length);
}
