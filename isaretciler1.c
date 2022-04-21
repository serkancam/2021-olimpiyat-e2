#include <stdio.h>

int main()
{
    // <tip> *degisken_adi
    int a=5;
    int b=a;
    int *pt1;
    pt1=&a;//& işareti bir değişkenina adresini tutar.
    //pt1 adres, *pt1 değer gösterir
    printf("a nın adresi=%p\n",&a);
    printf("pt1 in işaret ettiği adres=%p\n",pt1);
    b=17;
    printf("a değeri=%d\n",a);
    //pt1 ile a adresindeki değeri görelim
    printf("a değeri=%d\n",*pt1);
    *pt1=8;
    printf("a değeri=%d\n",a);


    return 0;
}