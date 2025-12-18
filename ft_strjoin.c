/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:10:27 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/18 19:54:23 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	counter;
	size_t	len_s1;
	size_t	len_s2;

	counter = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest = malloc(len_s1 + len_s2 + 1);
	if (!dest)
		return (NULL);
	while (s1[counter])
	{
		dest[counter] = s1[counter];
		counter++;
	}
	dest[counter] = '\0';
	ft_strlcat(dest, s2, len_s1 + len_s2 + 1);
	return (dest);
}
