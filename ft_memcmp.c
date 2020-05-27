/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:33:44 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/24 16:33:44 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*arr1 != *arr2)
			return (*arr1 - *arr2);
		arr1++;
		arr2++;
	}
	return (0);
}
