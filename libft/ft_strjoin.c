/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-s < jpedro-s@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:13:45 by jpedro-s          #+#    #+#             */
/*   Updated: 2021/10/31 18:42:53 by jpedro-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	len = malloc(size + 1 * sizeof(char));
	if (len == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		len[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		len[i] = s2[j];
		i++;
		j++;
	}
	len[i] = '\0';
	return (len);
}
