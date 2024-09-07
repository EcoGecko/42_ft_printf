/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:20:03 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/16 10:29:27 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_get_pos(char const *str, char const *set, int pos)
{
	size_t	i;

	if (!pos)
	{
		i = -1;
		while (++i < ft_strlen(str))
		{
			if (ft_char_check(str[i], set))
				pos++;
			if (!ft_char_check(str[i], set))
				break ;
		}
	}
	else if (pos == (int)ft_strlen(str))
	{
		i = pos;
		while (--i > 0)
		{
			if (ft_char_check(str[i], set))
				pos--;
			if (!ft_char_check(str[i], set))
				break ;
		}
	}
	return (pos);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		s1_len;
	char	*str;

	if (!s1)
		return (NULL);
	if (*s1)
	{
		s1_len = ft_strlen(s1);
		start = ft_get_pos(s1, set, 0);
		end = ft_get_pos(s1, set, s1_len);
	}
	else
		end = 1;
	if (end == 1)
		start = end;
	str = (char *)malloc(sizeof (*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	str = ft_substr(s1, start, end - start);
	return (str);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
