//diziveilkeltipfarki.c
#include <stdio.h>

int main()
{
    //ilkel tip(int,float,char... vb tipler)
    int a=5;
    int b=a;
    b=8;
    printf("a=%d,b=%d\n",a,b);
    //referans tipleri(diziler ve işaretçiler)
    int d1[4]={1,2,3,4};
    int d2[4]={2,4,8,16,};
    d2[0]=123;
    printf("d1[0]=%d,d2[0]=%d\n",d1[0],d2[0]);

    return 0;

}