/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:49:26 by lbard             #+#    #+#             */
/*   Updated: 2024/11/15 18:49:26 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    int i;

    i = 0;
    while (str[i]);
    {
        if (str[i] != '%')
            ft_putstr(str);
        else 
            ft_format(str, ap);
        i++;
    }
    va_end(ap);
    return (str);
}

/*int ft_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int i;

    i = 0;
    while(format[i])
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == 'c')
            {
                va_arg(ap, char);
                ft_putchar();
                i++;
            }
            else if (format[i + 1] == 's')
            {
                va_arg(ap, char);
                ft_putstr();
                i++;
            }
            else if (format[i + 1] == 'p')
            {
                
            }
            else if (format[i + 1] == 'd')
            {

            }
            else if (format[i + 1] == '%')
            {
                ft_putchar("%");
                i++;
            }
        }
    }
}*/