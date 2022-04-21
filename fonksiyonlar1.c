#include <stdio.h>
void merhaba()
{
    printf("merhaba... \n");
}
void merhaba2(int adet)
{
    for(int i=0;i<adet;i++)
    printf("merhaba2...\n");
}

float ortalama(float s1,float s2, float s3)
{ 
    float ort=(s1+s2+s3)/3;
    return ort;
}

int main()
{

    merhaba();//sadece ekrana merhaba yazsın istiyoruz.
    merhaba2(2);
    float sonuc;
    sonuc=ortalama(8,5,50);
    printf("sonuc=%f\n",sonuc);
    return 1;
}