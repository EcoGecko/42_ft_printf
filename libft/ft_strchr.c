/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:26:54 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/15 14:38:29 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (!s[i] && c == 0)
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%s\n", ft_strchr(argv[1], *argv[2]));
	return (0);
}*/
