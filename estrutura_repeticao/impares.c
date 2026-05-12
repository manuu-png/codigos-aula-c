#include <stdio.h>

int main(){
   int i = 1;

   while (i <= 1000)
   {
    if (i % 2 != 0)
    {
        printf("\n Numero %i e impar", i);
    }
     i++;
   }
   
    return 0;
}