#include <stdio.h>

int main()
{   //başla
    /*
    ++ ve -- operatörleri
    tekil operatörlerdir. Yani işlemleri tek bir değişken üzerinde yaparlar
    operatörün değişkenin neresinde olduğu önemlidir.
    int a=5;
    a++;
    ++a
    */
    int a = 5, b = 8, c;
    float f1=28.5;
    c = b++ - --a;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("f1=%f\n",f1--);
    printf("f1=%f\n",f1);

    return 0;
} //bitir