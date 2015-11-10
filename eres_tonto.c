#include <stdio.h>
#include <stdlib.h>

int main (){;

   int ans;

   ans = system("zenity --question --text \"¿es usted tonto?\"; echo $?");

   if (ans == 1)

       while (ans == 1)
	  ans = system("zenity --question --text \"seguro?\"");
   else
       system("zenity --info --text \"`toilet -f pagga \"Tonto\"`\"");


    return EXIT_SUCCESS;
}
