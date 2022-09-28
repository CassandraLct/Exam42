/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:44:30 by clecat            #+#    #+#             */
/*   Updated: 2022/09/14 09:46:51 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*free
Ecrivez une fonction appelée ft_list_remove_if qui supprime de la liste passée
tout élément dont les données sont "égales" aux données de référence.

Elle sera déclarée comme suit :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()) ;

cmp prend deux void* et retourne 0 lorsque les deux paramètres sont égaux.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;*/

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
		return;
	t_list *tmp = *begin_list;
	if (cmp(tmp->data, data_ref) == 0)
	{
		*begin_list = tmp->next;
		free(tmp);
		ft_list_remove_if(*begin_list, data_ref, cmp);
	}
	tmp = *begin_list;
	ft_list_remove_if(&tmp->next, data_ref, cmp);
}

/*#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;
	t_list *cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}
-----------------------------------------------------------------------------
 #include <stdio.h>
 #include <string.h>

 void	print_list(t_list **begin_list)
 {
	t_list *cur = *begin_list;
	while (cur != 0)
 	{
 		printf("%s\n", cur->data);
 		cur = cur->next;
	}
 }

int		main(void)
 {
 	char straa[] = "String aa";
 	t_list *aa = malloc(sizeof(t_list));
 	aa->next = 0;
	aa->data = straa;

 	char strbb[] = "String bb";
 	t_list *bb = malloc(sizeof(t_list));
 	bb->next = 0;
 	bb->data = strbb;

 	char strcc[] = "String cc";
 	t_list *cc = malloc(sizeof(t_list));
 	cc->next = 0;
 	cc->data = strcc;

 	char strdd[] = "String dd";
 	t_list *dd = malloc(sizeof(t_list));
 	dd->next = 0;
 	dd->data = strdd;

 	aa->next = bb;
 	bb->next = cc;
 	cc->next = dd;

 	t_list **begin_list = &aa;

 	print_list(begin_list);
 	printf("----------\n");
 	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
}*/