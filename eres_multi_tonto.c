#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=0;

    while (i!=6){

/* La & repite el comando varias veces */

        system("zenity --question --text \"¿es usted tonto?\" &");
        i++;
    }

    return EXIT_SUCCESS;
}
