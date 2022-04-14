/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:53:35 by mouarsas          #+#    #+#             */
/*   Updated: 2022/01/11 18:53:40 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkforma(va_list ptr, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		i += ft_putstr(va_arg(ptr, char *));
	else if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	else if (c == 'x')
		i += ft_lowhexa(va_arg(ptr, unsigned int));
	else if (c == 'X')
		i += ft_upperhexa(va_arg(ptr, unsigned int));
	else if (c == '%')
		i += ft_putchar('%');
	else if (c == 'u')
		i += ft_uputnbr(va_arg(ptr, unsigned int));
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_lowhexa(va_arg(ptr, unsigned long));
	}
	else
		i += ft_putchar(c);
	return (i);
}

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start (ptr, f);
	while (f[i])
	{
		if (f[i] != '%')
			count += ft_putchar(f[i]);
		else if (f[i] == '%' && f[i + 1] != '\0')
		{
			count += ft_checkforma(ptr, f[i + 1]);
			i++;
		}
		i++;
	}
	return (count);
	va_end(ptr);
}
