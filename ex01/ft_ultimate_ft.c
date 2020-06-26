/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jawillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:58:45 by jawillia          #+#    #+#             */
/*   Updated: 2020/06/26 09:32:20 by jawillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{	
	int a;
	int *ptr;
					/*int *ptr1;
					int **ptr2;
					int ***ptr3;
					int ****ptr4;
					int *****ptr5;
					int ******ptr6;
					int *******ptr7;
					int ********ptr8;
					int *********ptr9;
					ptr1 = &a;
					ptr2 = &ptr1;
					ptr3 = &ptr2;
					ptr4 = &ptr3;
					ptr5 = &ptr4;
					ptr6 = &ptr5;
					ptr7 = &ptr6;
					ptr8 = &ptr7;
					ptr9 = &ptr8;*/
	a = 12;
	ptr = &a;
	printf ("%d",a);
	ft_ultimate_ft(*ptr);
	return 0;
}


