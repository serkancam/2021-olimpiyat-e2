#include <stdio.h>

int main()
{
    char dizi[]="abcd";
    for(int i=0;i<4;i++)
        if(i%2!=0)
            dizi[i]=dizi[i]+2;//eğer bir char küçük karakter ise ondan 32 çıkardığımızda büyük karakterin değeri oluşur
    
    printf("%s\n",dizi);
    //abcd
    //adcf
    //cbed
    //cdef
    //program hata verir

    return 0;
}