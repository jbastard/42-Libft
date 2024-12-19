/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 15:42:19 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-18 15:42:19 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/get_next_line.h"

size_t	gnl_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*gnl_strchr(const char	*s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char) c)
		i++;
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}

char	*gnl_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		s1index;
	int		s2index;
	char	*fstr;

	index = 0;
	s1index = gnl_strlen(s1);
	s2index = gnl_strlen(s2);
	fstr = malloc (s1index + s2index + 1);
	if (!fstr)
		return (NULL);
	s1index = 0;
	s2index = 0;
	while (s1[s1index])
	{
		fstr[index++] = s1[s1index];
		s1index++;
	}
	while (s2[s2index])
	{
		fstr[index++] = s2[s2index];
		s2index++;
	}
	fstr[index] = '\0';
	return (fstr);
}

char	*gnl_strdup(const char *s)
{
	char	*str_dest;
	size_t	len;

	len = gnl_strlen(s) + 1;
	str_dest = malloc (len);
	if (!str_dest)
		return (NULL);
	len = 0;
	while (s[len])
	{
		str_dest[len] = s[len];
		len++;
	}
	str_dest[len] = '\0';
	return (str_dest);
}

char	*gnl_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	s_len;
	char	*substr;

	index = 0;
	s_len = gnl_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (start + len > s_len)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (index < len)
		substr[index++] = s[start++];
	substr[index] = '\0';
	return (substr);
}
