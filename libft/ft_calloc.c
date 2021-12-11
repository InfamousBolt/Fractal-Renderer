/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:48:36 by keshav            #+#    #+#             */
/*   Updated: 2021/11/18 21:43:07 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void			*temp;
	size_t			res;
	size_t			i;
	unsigned char	*stemp;

	res = nmemb * size;
	temp = malloc(nmemb * size);
	stemp = temp;
	i = 0;
	if (temp == 0)
		return (temp);
	if (temp)
	{
		while (res > 0)
		{
			stemp[i] = '\0';
			i++;
			res--;
		}
	}
	return (temp);
}
