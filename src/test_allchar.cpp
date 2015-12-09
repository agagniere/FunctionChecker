/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c										:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:46:07 by angagnie          #+#    #+#             */
//   Updated: 2015/11/30 14:15:16 by angagnie         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

void	test_allchar(int (*ft)(int c), int (*ref)(int c))
{
	for (int i = -130 ; i < 130 ; i++)
	{
		MARK(ref(i) == ft(i), , i);
	}
}
