/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:51:42 by lbard             #+#    #+#             */
/*   Updated: 2024/12/15 21:51:42 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *str)
{
	int count;

	count = 0;
	if (!str)
	{
		ft_putstr("(nil)");
		count = 5;
		return (count);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}