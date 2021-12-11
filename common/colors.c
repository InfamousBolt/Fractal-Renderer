/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:32:45 by keshav            #+#    #+#             */
/*   Updated: 2021/12/11 15:33:00 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

int	ft_make_trgb(int t, int r, int g, int b)
{
	int	col;

	col = (t << 24 | r << 16 | g << 8 | b);
	return (col);
}

int	ft_make_color(t_color src)
{
	int	col;

	col = src.a << 24 | src.r << 16 | src.g << 8 | src.b;
	return (col);
}

int	ft_smooth_color(t_numbr new, int i, t_data *data)
{
	double	smoothed;
	int		col;

	smoothed = log2(log2(new.real * new.real + new.img * new.img) / 2.0);
	col = (int)(sqrt((double)(i) + 10.0 - smoothed) * 255.0) % data->i;
	return (col);
}

int	ft_calc_color(t_numbr new, int i, t_data *f)
{
	int		index;

	index = ft_smooth_color(new, i, f);
	if (i == f->i)
		return (0);
	return (f->palette[index]);
}
