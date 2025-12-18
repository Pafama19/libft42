/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 19:42:11 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/18 14:07:33 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mod_str;
	unsigned int	counter;
	size_t			strlen;

	counter = 0;
	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	mod_str = malloc(strlen + 1);
	if (!mod_str)
		return (NULL);
	while (counter < strlen)
	{
		mod_str[counter] = f(counter, s[counter]);
		counter++;
	}
	mod_str[counter] = '\0';
	return (mod_str);
}
