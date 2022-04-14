/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:54:18 by mouarsas          #+#    #+#             */
/*   Updated: 2022/01/11 18:54:23 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhexa(unsigned long long n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(base[n]);
		i++;
	}
	else
	{
		i += ft_lowhexa(n / 16);
		i += ft_lowhexa(n % 16);
	}
	return (i);
}

int	ft_upperhexa(unsigned int n)
{
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	i = 0;
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += ft_upperhexa(n / 16);
		i += ft_upperhexa(n % 16);
	}
	return (i);
}
