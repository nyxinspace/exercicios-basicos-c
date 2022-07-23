#include <stdio.h>
#include <stdlib.h>

int main()
{
   float media[3];
   float mdt = 0;
   int c = 0;

   for(c=0;c<3;c++)
   {
       printf("Digite a nota do aluno %d ", c+1);
       scanf(" %f", &media[c]);
       mdt = media[c] + mdt;
   }
   mdt = mdt/3;
   printf(" %f", mdt);




    return 0;
}
