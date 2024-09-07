/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:07:31 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/14 15:03:46 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	size_t	n;

	if (argc != 4)
		return (0);
	n = atoi(argv[3]);
	printf("ft_memcmp:%d\n", ft_memcmp(argv[1], argv[2], n));
	printf("memcmp:%d\n", memcmp(argv[1], argv[2], n));
}*/
