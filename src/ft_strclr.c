/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbloodax <jbloodax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 19:25:12 by jbloodax          #+#    #+#             */
/*   Updated: 2020/02/09 19:25:24 by jbloodax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;
	int len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			s[i] = '\0';
			i++;
		}
	}
}
