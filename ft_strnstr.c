/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaissoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:40:57 by oaissoun          #+#    #+#             */
/*   Updated: 2021/11/05 13:17:34 by oaissoun         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		haystack_len;
	int		needle_len;
	size_t	i;
	size_t	j;

	haystack_len = ft_strlen((char *)haystack);
	needle_len = ft_strlen((char *)needle);
	i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
