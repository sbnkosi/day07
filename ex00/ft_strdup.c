/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:07:03 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:10:26 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
    int i = 0;
    while(str[i] != '\0')
      i++;
    char *str2;
    str2 = (char*)malloc(sizeof(*str2) * (i + 1));
    int j = 0;
    while(j < i)
     {
        str2[j] = str[j]; 
        j++;
     }
    str2[j + 1] = '\0';
    return str2;
}
