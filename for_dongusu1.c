#include <stdio.h>

int main()
{

    for(int i=20;i<=28;i=i+4)
    {
        printf("%d. merhaba\n",i);
    }

    for(int i=30;i>=-10;i=i-10)
    {
        printf("%d. merhaba\n",i);
    }
    /*54 ile 62 arasındaki sayıların toplamını bulsun*/
    int toplam=0;
    for(int i=54;i<=62;i++)
    {
        printf("%d\n",i);
        toplam=toplam+i;
    }
    printf("toplam=%d\n",toplam);
    return 0;
}