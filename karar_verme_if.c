#include <stdio.h>

int main()
{

    int ortalama;
    printf("not ortalamanızı giriniz:\n");
    scanf("%d",&ortalama);
    if(ortalama>=85)    
        printf("takdir.\n");
    else if(ortalama>=70)
        printf("teşekkür.\n")    
    else
    {    
        printf("yok.\n");
        printf("aca.\n");
    }
    

    return 0;
}