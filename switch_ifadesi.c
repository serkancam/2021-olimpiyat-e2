#include <stdio.h>

int main()
{

    /*
    deger 0 ise --> kapalı
    deger 1 ise --> orta ışık
    deger 2 ise --> yüksek ışık
    varsayılan --> hatalı giriş
    */

   int deger;
   printf("0-1-2 değerlerinden birini giriniz:");
   scanf("%d",&deger);
   switch(deger)
   {
       case 0: break;
       case 1:       
       case 2:
       printf("yüksek ışık.\n");
       break;
       default:
       printf("hatalı giriş.\n");
       break;

   }


    return 0;
}