// while_fibonacci.c
#include <stdio.h>

int main()
{
    long long int f1 = 1, f2 = 1, t; // f2 o adımdaki fibonacci değerini tutatcak
    int adim = 3;
    while (adim <= 100)
    {
        t = f2;       // f2 nin eski değerini koru
        f2 = f1 + f2; // f2 yi f1+f2 yap bu yeni fibonac değerimiz
        f1 = t;       // f2 nin eski değeri f1 e atansın
        printf("%ld. adım=%ld\n",adim,f2);
        adim++;

    }

   /* // 3. adım
    t = f2;       // f2 nin eski değerini koru
    f2 = f1 + f2; // f2 yi f1+f2 yap bu yeni fibonac değerimiz
    f1 = t;       // f2 nin eski değeri f1 e atansın
    printf("3. adım =%d\n", f2);
    
    //4. adım
    t=f2;
    f2=f1+f2;
    f1=t;
    printf("4. adım =%d\n",f2);
    //5. adım
    t=f2;
    f2=f1+f2;
    f1=t;
    printf("5. adım =%d\n",f2);
     //6. adım
    t=f2;
    f2=f1+f2;
    f1=t;
    printf("6. adım =%d\n",f2);
    */

    return 0;
}