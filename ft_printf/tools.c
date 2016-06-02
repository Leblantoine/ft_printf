/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 11:27:38 by aleblanc          #+#    #+#             */
/*   Updated: 2016/02/03 11:31:19 by aleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		intlen(int nbr)
{
	int		len;

	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	if (nbr >= 0 && nbr < 10)
		len++;
	return (len);
}

int		test_lh(const char *restrict format, char c)
{
	int		i;

	i = 0;
	while (*format)
	{
		if (*format == c)
			i++;
		format++;
	}
	return (i);
}

void	show_op(t_op *op)
{
	ft_putstr("len : ");
	ft_putnbr(op->len);
	ft_putstr("\nplus : ");
	ft_putnbr(op->plus);
	ft_putstr("\nminus : ");
	ft_putnbr(op->minus);
	ft_putstr("\nspace : ");
	ft_putnbr(op->space);
	ft_putstr("\nhash : ");
	ft_putnbr(op->hash);
	ft_putstr("\nzero : ");
	ft_putnbr(op->zero);
	ft_putstr("\nwidth : ");
	ft_putnbr(op->width);
	ft_putstr("\ndot : ");
	ft_putnbr(op->dot);
	ft_putstr("\npre : ");
	ft_putnbr(op->pre);
	ft_putstr("\nlength : ");
	ft_putstr("\ntype : ");
	ft_putchar(op->type);
	ft_putchar('\n');
}
