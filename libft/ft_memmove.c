/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:19:40 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/15 10:35:16 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}

/*#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	printf("%s\n", (char *)ft_memmove(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", (char *)memmove(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
