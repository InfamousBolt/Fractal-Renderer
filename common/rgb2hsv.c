/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb2hsv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:37:12 by keshav            #+#    #+#             */
/*   Updated: 2021/12/11 15:37:20 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

static
double	ft_calc_hue(t_color in, double max, double diff)
{
	double	h;

	if (in.r >= max)
		h = (in.g - in.b) / diff;
	else if (in.g >= max)
		h = 2.0 + (in.b - in.r) / diff;
	else
		h = 4.0 + (in.r - in.g) / diff;
	h *= 60.0;
	if (h < 0.0)
		h += 360.0;
	return (h);
}

t_hsv	rgb2hsv(t_color in)
{
	t_hsv	out;
	double	max;
	double	diff;

	max = fmax(in.r, fmax(in.g, in.b));
	out.v = max;
	diff = max - fmin(in.r, fmin(in.g, in.b));
	if (diff < 0.00001)
	{
		out.s = 0;
		out.h = 0;
		return (out);
	}
	if (max > 0.0)
		out.s = (diff / max);
	else
	{
		out.s = 0.0;
		out.h = NAN;
		return (out);
	}
	out.h = ft_calc_hue(in, max, diff);
	return (out);
}
