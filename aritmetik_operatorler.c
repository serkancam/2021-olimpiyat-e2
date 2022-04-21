#include <stdio.h>

int main()
{
    int a=5,b=10,c=20,d=12,e=15;
    int sonuc;
    float f=3.0;
    sonuc=(a+b+c+d)/(e+5);
    printf("sonuc=%d\n",sonuc);
    sonuc=(a*b)%(c+d)/e-a;
    printf("sonuc=%d\n",sonuc);

    sonuc=5/2.0;//


    printf("sonuc=%d\n",sonuc);//1.0-1.2 
    // printf("sonuc=%d\n",sonuc);//1 - 1
    // printf("test=%.2f\n",9/2.0);
    // printf("son=%d\n",3.0f);
    // float fa;
    // fa=3/2.0;//1.5
    // fa=3/2;//1

    

    return 0;
}