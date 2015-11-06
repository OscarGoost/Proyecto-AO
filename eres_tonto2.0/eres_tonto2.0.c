#include <stdio.h>
#include <stdlib.h>

int main (){
    int respuesta;
/* Se declara el puntero al archivo al que se hace referencia para leer la variable*/
    FILE * f;

    do{
        system("zenity --question --text \"¿Es usted tonto?\"; echo $? > variablezenity.txt");
/* Abre el archivo donde la variable se ha guardado*/
        f = fopen("variablezenity.txt", "r");
/* Escribe la variable desde el archivo con fcanf*/
        fscanf (f, "%i", &respuesta);
    }while(respuesta == 1);

    if(respuesta == 0)
        system("toilet -F border --gay \"Ahora eres mi putita     :D\"");

    return EXIT_SUCCESS;
}
