/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:26:22 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/24 16:26:22 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_num_len(long num, int sign)
{
	unsigned int	num_len;

	if (num == 0)
		return (1);
	num_len = 0;
	while (num > 0)
	{
		num /= 10;
		num_len++;
	}
	if (sign == -1)
		num_len++;
	return (num_len);
}

static void			convert_num(char *str, long num, unsigned int num_len,
		int sign)
{
	str[num_len] = '\0';
	str[--num_len] = num % 10 + '0';
	num /= 10;
	while (num > 0)
	{
		str[--num_len] = num % 10 + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char				*ft_itoa(int n)
{
	char			*str;
	long			num;
	unsigned int	num_len;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		num = (long)n * -1;
		sign = -1;
	}
	else
		num = n;
	num_len = get_num_len(num, sign);
	if (!(str = malloc(sizeof(char) * num_len + 1)))
		return (NULL);
	convert_num(str, num, num_len, sign);
	return (str);
}
