#include <stdio.h>
#include <stdlib.h>

int main (){
    int respuesta;

    do{
        /* Si es NO la respuesta la funcion devuelve 256, y si la respuesta es SI devuelve 0 */
        respuesta = system("zenity --question --text \"¿Es usted tonto?\"");

    }while(respuesta != 0);

    if(respuesta == 0)
        system("toilet -F border --gay \"Ahora eres mi putita     :D\"");

    return EXIT_SUCCESS;
}
