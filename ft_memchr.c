/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:33:18 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/25 19:34:31 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)arr;
	i = 0;
	while (i < n && src[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&src[i]);
}
int main()
{
	char	*str27;
	char	str28[11] = "abcdefghij";
	char	*str29;
	char	str30[11] = "abcdefghij";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCHR\x1b[0m");
	printf("Initial: %s\n", str28);
	str27 = memchr(str28, '\0', 8);
	printf("Memchr return: %s\n", str27);
	str29 = ft_memchr(str30, 'e', 8);
	printf("ft_memchr return: %s\n", str29);
}