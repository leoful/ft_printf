/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:47 by lbard             #+#    #+#             */
/*   Updated: 2024/12/06 22:36:16 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	ft_countnbr_base(unsigned long int nb, int base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= base;
		i++;
	}
	return (i);
}

static char	*ft_itoa_base(unsigned long int nb, int base, char MAJ_or_min)
{
	char	*str;
	int		i;
	int		stash;

	i = ft_countnbr_base(nb, base);
	str = malloc(i + 1);
	if (!str)
	{
		return (NULL);
	}
	str[i] = '\0';
	while (nb > 0)
	{
		i--;
		stash = nb % base;
		if (stash < 10)
			str[i] = stash + '0';
		else if (MAJ_or_min == 'a')
			str[i] = stash - 10 + 'a';
		else if (MAJ_or_min == 'A')
			str[i] = stash - 10 + 'A';
		nb /= base;
	}
	return (str);
}

int	ft_print_p(void *ptr)
{
	char	*str;
	int		len;

	if ((char *)ptr)
	{
		str = ft_itoa_base((unsigned long)ptr, 16, 'a');
		write(1, "0x", 2);
		ft_putstr(str);
		len = ft_strlen(str + 2);
		free(str);
	}
	return (len);
}
