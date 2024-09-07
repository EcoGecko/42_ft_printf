/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:11:33 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/14 14:36:21 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		if (*ptr++ == (unsigned char)c)
			return ((void *)ptr - 1);
		n--;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t	n;
	char	*ptr;

	if (argc != 4)
		return (0);
	n = atoi(argv[3]);
	ptr = ft_memchr(argv[1], *argv[1], n);
	if (!ptr)
		return (0);
	printf("%s\n", ptr); 
	return (0);
}*/
