/*
 * =====================================================================================
 *
 *       Filename:  proyect_GT.c
 *
 *    Description:  Gatos y tetas versión ASCII
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int i;

            for (i;i<=99999;i++){
                if (i%2==0)
/* Para intercalar una orden en otra se abre y se cierra con  `  */
                    system ("zenity --info --text \"`toilet -F border -f pagga \"Gatos y Tetas\"`\"");
                else
                    system ("zenity --info --text \"`toilet -F border -f pagga \"Tetas y Gatos\"`\"");
	    }

	return EXIT_SUCCESS;
}
