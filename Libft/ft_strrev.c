/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:43:20 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/17 17:34:23 by mgrass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		i;
	int		c;
	char	chr;

	i = 0;
	c = 0;
	if (*s)
	{
		while (s[c])
			c++;
		c -= 1;
		while (i < (c + 1) / 2)
		{
			chr = s[i];
			s[i] = s[c - i];
			s[c - i] = chr;
			i++;
		}
	}
	return (s);
}