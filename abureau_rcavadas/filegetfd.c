/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filegetfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:01:19 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:01:20 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	filegetfd(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		error(NULL);
	return (fd);
}
