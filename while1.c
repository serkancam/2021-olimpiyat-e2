#include <stdio.h>

int main()
{
    // 0 dan 9 a kadar sayma
    int i=0;//döngü değişkeni
    while( i<10)//şart
    {        
        printf("%d\n",i);
        i++;
    }
    printf("--------------\n");
    i=-1;
    while(++i<10)//şart kısmında döngü değişkeni değiştirilebilir.    
        printf("%d\n",i);
    
    return 0;
}