#include <stdio.h>

int main()
{
    //5 elemenlı tek boyutlu bir dizi oluşturur
    //elemnaların değerleri rastgeledir.
    int d1[5];
    printf("%d\n",d1[1]);
    // 5 elemanlı tek boytulu bütün elemanlarına başlangıçta değer atama
    int d2[6]={3,5,30,28,78};
    printf("%d\n",d2[5]);
    //5 elemanlı bir tek boyutlu başlangıç değerleri belli dizi
    int d3[]={20,23,25,26,29,30,32};
    printf("d3[5]=%d\n",d3[5]);
    //sizeof
    printf("d3 boyutu = %d\n",sizeof(d3));
    printf("d3[2] boyut= %d\n",sizeof(d3[2]));
    printf("d3 eleman sayısı=%d\n",sizeof(d3)/sizeof(d3[0])); 

    return 0;
}