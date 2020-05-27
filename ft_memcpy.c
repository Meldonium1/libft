/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:34:18 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/24 16:34:18 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > i)
	{
		d[i] = s[i];
		d++;
		s++;
	}
	return (dest);
}
