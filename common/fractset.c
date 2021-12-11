/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:35:05 by keshav            #+#    #+#             */
/*   Updated: 2021/12/11 15:35:19 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

void	ft_init_mandel(t_data *data)
{
	data->maxreal = 1.0;
	data->minreal = -2.0;
	data->maximg = 1.0;
	data->minimg = -1.0;
	data->zoom = 1.0;
}

void	ft_init_julia(t_data *data)
{
	data->maxreal = 4.0;
	data->minreal = -4.0;
	data->maximg = 2.0;
	data->minimg = -2.5;
	data->juliaimg = -0.5;
	data->juliareal = 1.0;
	data->zoom = 0.68;
}

void	ft_init_ship(t_data *data)
{
	data->maxreal = 2.6;
	data->minreal = -2.2;
	data->maximg = 1.8;
	data->minimg = -1.8;
	data->zoom = 0.8;
}
