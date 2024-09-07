/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <heda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:02:24 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/18 13:28:24 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && size - i > 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = 0;
	return (ft_strlen(src));
}

/*int	main(int argc, char *argv[])
{
	char	*dest;

	if (argc != 3)
		return (0);
	dest = (char *)malloc(sizeof(*dest) * 15);
	if (!dest)
		return (0);
	ft_strlcpy(dest, argv[1], ft_atoi(argv[2]));
	return (0);
}*/
