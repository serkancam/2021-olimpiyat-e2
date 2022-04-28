/*

dönüş_tipi fonksiyon_adı(parametreler)
{

    //işlemler
}


*/
// Bildiğiniz gibi veri tiplerini değer tutma yapılarına göre ikiye ayırdık
// 1- değer tipleri(ilkel tipler)
//    a- tam sayılar (short,int, long, char)
//    b- ondalıklı sayılar(float,doble)
// 2- adres tipleri(referans tipler): işaretçiler/göstericiler veya diziler
// bu tipler değer yerine değerin bulunduğu adresi tutarlar 
// onun için fonksiyon parametre olarak bir değer tipi alırsa onun sadece değeri
//fonksiyona gönderilir. Değer tipi alırsa, o değerin adresi gönderilir.
//bunu anlamak için artir1 ve artir2 adında iki fonksiyonumuz olsun
//artir1 parametre olarak 1 adet int (ilkel/değer) tipi alsın. ve Bu değeri 1 arttırtsın
//artir2 ise parametre olarak 1 adet int işarertçi tipi alsın. Bu değeri 1 artırsın
//Burda artir1 e değer olarak gönderilen değişken değerini korurken
//artir2 ye paramete olarak referansı gönderilen değişkenin 1 arttığı görülür.
#include <stdio.h>

void artir1(int a)
{
    a=a+1;

}
void artir2(int *a)
{
    *a=*a+1;

}

void artir3(int a[])
{
    a[0]=a[0]+1;
}

int main()
{
    int sayi1=10,sayi2=20;
    int dizi[5]={25,26,30,38,40}; 

    //burada sayi1 değeri gönderilir ve fonskiyonda o değer işlenir.
    //çünkü fonksiyon tanımı bizden değer/ilkel int tipi istektedir
    artir1(sayi1);
    printf("sayi1=%d\n",sayi1);
   
    //Burada sayi2 adresi gönderilir ve fonksiyon o adrestedki değeri değiştirir.
    artir2(&sayi2);
    printf("sayi2=%d\n",sayi2);// 
    artir3(dizi);
    printf("dizi[0]=%d\n",dizi[0]);
    return 0;
}