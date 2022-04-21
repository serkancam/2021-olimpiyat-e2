#include <stdio.h>
int main()
{
    int a=5,b=3,temp;
    printf("a=%d-b=%d\n",a,b);
    /*
    a nın değerini b ye be nin değerini a ya aktarınız
    */
   temp=a;
   a=b;
   b=temp;
   printf("a=%d-b=%d\n",a,b);
    return 0;
}