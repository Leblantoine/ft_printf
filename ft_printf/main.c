/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 09:44:51 by aleblanc          #+#    #+#             */
/*   Updated: 2016/02/04 10:38:07 by aleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>
#include <locale.h>

int		main(void)
{
	setlocale(LC_ALL, "");
	int		len;
	int		len2;
	int		i = 0;

	len = ft_printf("% ");
	ft_putstr("Return value : ");
	ft_putnbr(len);
	ft_putstr("\n -------------------- \n");
	len2 = printf("% ");
	ft_putstr("Return value : ");
	ft_putnbr(len2);
	ft_putchar('\n');
	return (0);
}
