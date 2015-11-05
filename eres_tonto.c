#include <stdio.h>
#include <stdlib.h>

int main (){;

   int ans;

   ans = system("zenity --question --text \"¿es usted tonto?\"; echo $?");

   if (ans = 1){
       do{
	  system("zenity --question --text \"seguro?\"");
       }while (ans = 1);
   }
   else
       system("zenity --info --text `toilet -F border - pagga \"TONTO\"`");


    return EXIT_SUCCESS;
}
