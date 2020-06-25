/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:08:09 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/25 13:09:14 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int     *ft_range(int min, int max)
{
    int i = 0;
    char str[min - max] = (int*)malloc(sizeof(*str) + (max-min));
    while(min < max)
    {
        str[i] = min;
        min++;
        i++;
    }
    return str;
}
