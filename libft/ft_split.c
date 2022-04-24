/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:17:21 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/16 21:23:54 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	endsofsubs(char const *s, char c, size_t start)
{
	if (ft_strchr(s + start, c) == NULL)
		return (ft_strlen(&s[start]));
	else
		return (ft_strchr(s + start, c) - &s[start]);
}

static char	**bufferfree(char **buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i] != NULL)
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
	return (NULL);
}

static char	**outcome(char const *s, char c, char **buffer)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	while (s[start] != '\0')
	{
		while (s[start] == c)
			start++;
		if (s[start] == '\0')
			break ;
		buffer[i] = (ft_substr(s, start, endsofsubs(s, c, start)));
		if (buffer[i] == NULL)
			return (bufferfree(buffer));
		i++;
		start += endsofsubs(s, c, start);
	}
	buffer[i] = NULL;
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	count;

	buffer = NULL;
	if (!s)
		return (NULL);
	count = wordcount(s, c);
	buffer = malloc((count + 1) * sizeof(char *));
	if (buffer == NULL)
		return (NULL);
	buffer = outcome(s, c, buffer);
	return (buffer);
}
