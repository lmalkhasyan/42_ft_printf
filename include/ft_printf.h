/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <lmalkhas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:22:51 by lmalkhas          #+#    #+#             */
/*   Updated: 2022/03/23 19:45:37 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check_format(const char *format, va_list *args);

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n, unsigned int base, int type);
int	ft_putnbr_unsigned(unsigned long long n, unsigned int base, int type);
int	ft_putptr(void *ptr);
#endif
