/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduryee <vduryee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:25:50 by vduryee           #+#    #+#             */
/*   Updated: 2026/11/10 12:16:49 by vduryee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		res[i] = s1[i];
		i++;
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	while (i < len)
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}

char	*ft_strdup(const char *s)
{
	char	*dst;
	char	c;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		c = s[i];
		dst[i] = c;
		if (c == '\0')
			return (len);
		i++;
	}
	dst[i] = '\0';
	// ft_strlcpy(dst, s, (len + 1));
	return (dst);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	char	*empty_str;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
	{
		empty_str = ft_strdup("");
		return (empty_str);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}