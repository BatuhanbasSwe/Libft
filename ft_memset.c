/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbas <cbas@student.42.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 01:18:51 by cbas              #+#    #+#             */
/*   Updated: 2026/09/08 04:59:49 by cbas         	  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*point;
	size_t			i;

	point = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		point[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
