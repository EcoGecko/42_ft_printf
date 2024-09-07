/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:05:02 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/18 13:31:43 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	array = (void *)malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero (array, nmemb * size);
	return (array);
}

/*int	main(int argc, char *argv[])
{
	void	*ptr;

	if (argc != 3)
		return (0);
	ptr = ft_calloc(atoi(argv[1]), atoi(argv[2]));
	free(ptr);
	return (0);
}*/
