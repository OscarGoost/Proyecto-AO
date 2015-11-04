#include <stdio.h>
#include <stdlib.h>

int main (){
    int respuesta;
    FILE * f;

    do{
        system("zenity --question --text \"¿Es usted tonto?\"; echo $? > variablezenity.txt");

        f = fopen("variablezenity.txt", "r");

        fscanf (f, "%i", &respuesta);
    }while(respuesta == 1);

    if(respuesta == 0)
        system("toilet -F border --gay \"Ahora eres mi putita     :D\"");

    return EXIT_SUCCESS;
}
