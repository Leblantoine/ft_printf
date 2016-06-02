/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:34:11 by aleblanc          #+#    #+#             */
/*   Updated: 2015/11/30 08:29:48 by aleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int u;

	u = 0;
	i = ft_strlen(s1);
	while (s2[u] != '\0')
	{
		s1[i] = s2[u];
		i++;
		u++;
	}
	s1[i] = '\0';
	return (s1);
}