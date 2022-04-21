//karsilastirma_operatorleri.c
#include <stdio.h>

int main()
{
    /*
    a<b a küçüktür b den--> doğru(1) yanlış(0)
    a>b
    a<=b
    a>=b
    a==b
    a!=b
    */
    int a = 5, b = 8, c = 5, snc;
    snc = a < b;//snc=1
    printf("a<b--->%d\n",snc);
    snc= a>b;
    printf("a>b--->%d\n",snc);
    snc = a != c;
    printf("a!=b--->%d\n",snc);
    snc=a=b;
    return 0;
}
