#include <stdio.h>

int main()
{
    /*
    kullancıdan bşr dizi eleman sayısı alıp o elemen sayısına sahip bir dizi
    oluşturalım.
    */
   int adet;
   printf("sayı giriniz:\n");
   scanf("%d",&adet);//& işareti bir değişkenin adresini verir.
   float dizi[adet];
   printf("boyut=%d\n",sizeof(dizi)/sizeof(int));

   for(int i=0;i<adet;i++)    
   scanf("%f",&dizi[i]);

   for (int i = 0; i < adet; i++)
   printf("dizi[%d]=%f\n",i,dizi[i]);

   //döngüdeki sayıların ortalamasını bulsun
  
   
   float ort = 0;
//    ort=(dizi[0]+dizi[1]+dizi[2]+dizi[3]+dizi[4])/4;
   for(int i=0;i<adet;i++)
        ort+=dizi[i];//ort=ort+dizi[i];

   ort=ort/adet;
   printf("dizinin ortalaması=%f\n",ort);  
   
    return 0;
}