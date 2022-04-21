#include <stdio.h>

int main()
{
    char c1='a';
    char c2=97;
    printf("c1=%c,c2=%c\n",c1,c2);
    printf("c1=%c\n",c1+3);
    char i1='c',i2='e',i3='m';
    printf("%c%c%c\n",i1,i2,i3);
    char ct='ö';
    printf("%d\n",ct);
    printf("%c\n",-74);
    printf("%c\n",35);
    /*
    MEHMET isminin sayı değerlerinin(ascii/onluk) toplamını bulan ve sonucu ekrana yazdıran kodu yazınız. 
    */
   printf("%d\n",'M'+'E'+'H'+'M'+'E'+'T');
   
    return 0;
}