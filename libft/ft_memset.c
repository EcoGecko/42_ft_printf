/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:59:01 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/14 18:14:57 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	printf("%s\n", (char *)ft_memset(argv[1], *argv[2], atoi(argv[3])));
	return (0);
}*/
