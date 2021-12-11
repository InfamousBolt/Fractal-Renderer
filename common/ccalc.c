/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ccalc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:30:03 by keshav            #+#    #+#             */
/*   Updated: 2021/12/11 15:31:44 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

double	ft_getreal(int x, t_data *f)
{
	double	max;

	max = fabs(f->maxreal) + fabs(f->minreal);
	max = (double)x * max / ((double)(f->x)) + f->minreal;
	max = max / f->zoom + f->movex;
	return (max);
}

double	ft_getimg(int y, t_data *f)
{
	double	max;

	max = fabs(f->maximg) + fabs(f->minimg);
	max = -1.0 * ((double)(y) *max / ((double)(f->y)) + f->minimg);
	max = max / f->zoom + f->movey;
	return (max);
}

t_hsv	ft_interpolate_hsv(t_hsv col1, t_hsv col2, int i, int maxi)
{
	t_hsv		new;
	double		step;

	step = (double)(i) / (double)(maxi);
	new.h = (col2.h - col1.h) * step + col1.h;
	new.s = (col2.s - col1.s) * step + col1.s;
	new.v = (col2.v - col1.v) * step + col1.v;
	return (new);
}
