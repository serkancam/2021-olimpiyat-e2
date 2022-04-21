#include <stdio.h>

int main()
{
    //bir değiken ilk değeri olmadan işleme girmemeli

    int a=5,b=8;
    int c;//burada c=10 gibi bir ilk değer verilirse sorun yaşanmaz
    c=a+b+c;//bu işlemin olması için yani c nin bir işleme dahil olması için bir değerinin olması gerekir.
   
    printf("c=%d\n",c);

    int i1=8,i2=9,i3;
    i3=i1+i2;//i3 işleme girmiyor sadece bir işlem sonucu ona aktarılıyor
    //aslında i3 ilk değeri i1+i2 işleminin sonucu oluyor.
    return 0;
}