/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmahas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:02:23 by aalmahas          #+#    #+#             */
/*   Updated: 2024/09/30 13:02:32 by aalmahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	length;

	length = 0;
	if (str == NULL)
	{
		return (ft_putstr("(null)"));
	}
	while (*str)
	{
		length += ft_putchar(*str);
		str++;
	}
	return (length);
}
