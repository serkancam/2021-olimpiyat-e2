#include <stdio.h>

int main()
{
    int a = 5;
    printf("a adresi=%p\n",&a);
    // int c = a;
    int *b;//adres tutucu/adrese işaret edici/işaretçi(pointer)
    b = &a;
    printf("b adresi=%p\n",b);
    *b=78;
    printf(" a nın değeri=%d\n",a);
    printf(" b nin değeri=%d\n",*b);
    // c = 8;
    // printf("a=%d\n",a);
    // *b=182;
    // printf("a=%d\n",a);
    char *isim="vedat mert";
    char ad[30]="Kayra";

    printf("isim ilk karakter=%c\n",*isim);
    printf("ad ilk karakter=%c\n",ad[0]);

    printf("isim 3. karakter karakter=%c\n",*(isim+2));
    printf("ad 3. karakter=%c\n",ad[2]);

    printf("ad=%s,isim=%s\n",ad,isim);

    return 0;
}