/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:32:53 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/24 16:32:53 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (n > 0)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			i++;
			return (&d[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
