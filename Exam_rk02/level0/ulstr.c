/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:04:14 by clecat            #+#    #+#             */
/*   Updated: 2022/09/19 11:36:05 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Allowed functions: write
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.
You must display the result followed by a '\n'.
If the number of arguments is not 1, the program displays '\n'.

Examples :
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$*/

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] >= 65 && argv[1][i] <= 90)
                argv[1][i] = argv[1][i] + 32;
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
                argv[1][i] = argv[1][i] - 32;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}