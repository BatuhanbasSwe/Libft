/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbas <cbas <cbas@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:17:15 by cbas              #+#    #+#             */
/*   Updated: 2026/09/09 23:03:57 by cbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, i + 1);
	ft_strlcpy(ptr + i, s2, j + 1);
	return (ptr);
}
