#include <stdio.h>

int main()
{

    int dizi[3][2];//bu dizi kaç elemanlıdır.
    dizi[1][1]=5;
    dizi[2][0]=4;
    dizi[0][1]=2;
    //iç içe döngü
    int d[3][3]={3};
    int t=0;
    for(int i=0;i<3;i++)
        for(;t<3;t++)
            d[i][t]=i+(t*2)+1;

    
    return 0;
}