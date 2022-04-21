#include <stdio.h>

int main()
{
    /* not ortalaması 
    0-40-->FF
    40-50-->DD
    50-65--> CC
    65-85-->BB
    85-100--> AA
    */

   float n1,n2,n3,ortalama;
   printf("3 birer birer yazarak entera basınız:\n");
   scanf("%f",&n1);
   scanf("%f",&n2);
   scanf("%f",&n3);

   ortalama=(n1+n2+n3)/3;
   printf("ortalaman=%f\n",ortalama);
   if(ortalama>=100)   {
       print("yanlış değer girilmiş.\n");
   }
   else if(ortalama>=85)   {
       printf("AA aldınız.\n");
   }
   else if(ortalama>=65)   {
       printf("CC aldınız.\n");
   }
   else if(ortalama>=40)   {
       printf("DD aldınız.\n");
   }
   else if(ortalama>=0)   {
       printf("FF aldınız.\n");
   }
   else   {
       printf("negatif sayı girilemez.\n");
   }




    return 0;
}