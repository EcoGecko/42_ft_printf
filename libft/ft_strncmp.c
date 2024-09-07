/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:45:07 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/15 17:09:54 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (c_s1[i] || c_s2[i]))
	{
		if (c_s1[i] != c_s2[i])
		{
			return (c_s1[i] - c_s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
