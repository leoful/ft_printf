/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:38:48 by lbard             #+#    #+#             */
/*   Updated: 2024/11/15 19:38:48 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int    ft_format_u(int nb);
static int    ft_format_x(char str, va_list ap);

int  ft_format(char str, va_list ap)
{
    int count;

    count = 0;
    if (str == 'c')
    {
    //l'argument entier, de type int, est converti en un unsigned char, et le caractère correspondant est affiché.
        ft_putchar(va_arg(ap, int));
        count ++;
    }
    else if (str == 's')
        count += ft_putstr(va_arg(ap, char *));
    //else if (str == 'p')
        //renvoyer l'adresse d'un pointeur en hexadecimal
       // count += va_arg(ap, void *);
    else if (str == 'd' || str == 'i')
    {
        ft_putstr(ft_itoa_base(va_arg(ap, int), 10, '\0'));
        count += ft_strlen(ft_itoa_base(va_arg(ap, int), 10, '\0'));
    }
    else if (str == 'u')
    // argument de type int est converti en un chiffre décimal non signé (u)
        count += ft_format_u(va_arg(ap, int));
    else if (str == 'x' || str == 'X');
    // argument de type int est converti en un chiffre hexadécimal non signé (x et X).
        count += ft_format_x(str, ap);
    if (str == '%')
    {
        ft_putchar('%');
        count++;
    }
    return (count);
}

static int  ft_format_u(int nb)
{
    unsigned int unsigned_nb;
    char    *str;

    unsigned_nb = (unsigned int)nb;
    str = ft_itoa_base(unsigned_nb, 10, '\0');
    ft_putstr(str);
    return (ft_strlen(str));
}

static int  ft_format_x(char str, va_list ap)
{
    unsigned int num;
    char    *number_str;

    num = va_arg(ap, unsigned int);
    if (str == 'x')
    {
        number_str = ft_itoa_base(num, 16, 'a');
        ft_putstr(number_str);
        return(ft_strlen(number_str));
    }
    else if (str == 'X')
    {
        number_str = ft_itoa_base(num, 16, 'A');
        ft_putstr(number_str);
        return(ft_strlen(number_str));
    }
    return (0);
}