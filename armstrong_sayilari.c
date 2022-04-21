#include <stdio.h>

int main()
{
    /* üç basamaklı sayının basamaklarındaki rakamların küplerinin toplamı sayının
    
    */
    int sayi,toplam=0,degerler,gecici;
    printf("Bir sayı giriniz:\n");
    scanf("%d",&sayi);
    gecici=sayi;
    while (gecici!=0)
    {
        printf("%d\n",gecici%10);
        toplam+=(gecici%10)*(gecici%10)*(gecici%10);//toplam+=toplam+(gecici%10)*(gecici%10)*(gecici%10);
        gecici/=10;//gecici=gecici/10;
    }
    printf("toplam=%d",toplam);
    return 0;
}