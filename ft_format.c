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

void    ft_format(const char str, va_list ap)
{
    if (str == 'c')
        ft_putchar(va_arg(ap, int))
    else if (str == 's')
        ft_putstr(va_arg(ap, char *));
    else if (str == 'p')
    else if (str == 'd' || str == 'i')
        ft_itoa(va_arg(ap , int), ap);
    else if (str == 'u')
    else if (str == 'x' || str == 'X')
    else if (str == '%')
        ft_putchar("%");
}