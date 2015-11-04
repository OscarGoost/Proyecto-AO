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

    /* Realmente no ha sido nada dificil, solo he tenido que cambiar
    los printf del programa que ya hicimos en la uni por la orden system y sale, pero está gracioso
    Ah! y no se te curra hacer la gracia de poner "i<= un número grande", se peta muy jarcor */

            for (i;i<=100;i++){
                if (i%2==0){
                    system ("clear");
                    system ("toilet -F border --gay -f pagga \"Gatos y Tetas\"");
                    system ("sleep 0.5");
                }

                else{
                    system ("clear");
                    system ("toilet -F border --gay -f pagga \"Tetas y Gatos\"");
                    system ("sleep 0.5");
                }
	    }

	return EXIT_SUCCESS;
}
