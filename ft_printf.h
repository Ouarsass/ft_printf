/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:53:09 by mouarsas          #+#    #+#             */
/*   Updated: 2022/01/11 18:53:11 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *c, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_upperhexa(unsigned int n);
int		ft_lowhexa(unsigned long long n);
int		ft_uputnbr(unsigned int n);
long	ft_nblen(long long n);
int		ft_putnbr(long n);

#endif
