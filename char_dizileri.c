#include <stdio.h>

int main()
{
    char isim1[10]="mert"; //dizi boyutu 10
    char isim2[]="hasan"; //dizi boyutu 6   
    //her char dizisi eğer string ifade belirtiyorsa sonunda mutlaka 1 karakter \0 bulunur.
    printf("%s\n",isim1);//char dizilerini ekrana yazdırmak için %s yer tutucusu kullanılır
    printf("%s\n",isim2);//char dizilerini ekrana yazdırmak için %s yer tutucusu kullanılır
    //boyut öğrenmek için sizeof() komutu kullanılır.
    //sizeof komutu bir tam sayı değeri geri döndürü
    //bu komut aldığı değişken veya türün byte cinsinden ramde kapladığı alanın miktarını bulur
    printf("%d\n",sizeof(isim1)/sizeof(char));
    printf("%d\n",sizeof(isim2)/sizeof(char));
    //örneğin aşağıdaki sayi1 dizisinin sizeof ta dönene değeri kaçtır:
    int sayi1[3]={2,25,36,-1,2};
    printf("sayi1 sizeof değeri=%d\n",sizeof(sayi1));
    printf("sayi1 dizisinin  eleman sayısı=%d\n",sizeof(sayi1)/sizeof(int));
    //char dizisine string değer aktarma
    char ad[50];
    scanf("%s",ad);//&ad şeklinde yazmama sebebimiz. Zaten ad bir adrestir.
    printf("ad=%s",ad);
    return 0;
}