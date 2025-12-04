/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_netx_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srussso <srusso-b@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:18:44 by srussso           #+#    #+#             */
/*   Updated: 2025/12/04 18:24:51 by srussso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clear(int i, int byte, char *str_buffer)
{
	if (i == 0 || byte < 0)
	{
		free(str_buffer);
		return (NULL);
	}
}
