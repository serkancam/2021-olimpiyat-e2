#include <stdio.h>

int main()
{
    /*
    0 dışındaki bütün sayıların değili(!) 0 dır.

    */
   int sayi=-100,sifir=0;
   printf("sayi değili=%d\n",!sayi);
   printf("sıfırın değili=%d\n",!sifir);
   int sonuc;
   sonuc=(3<5) && (4>!8);
   printf("sonuc=%d\n",sonuc);
   int cikis,a=6;
   cikis=(3<5) ||(++a<10);
   printf("cikis=%d--a=%d\n",cikis,a);

    return 0;
}