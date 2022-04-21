#include <stdio.h>

int main()
{
    /*
    printf içinde tamasayıların 10 luk sistemdeki değerlerini göstermek için %d
    printf içinde uzun tamasayıların 10 luk sistemdeki değerlerini göstermek için %ld

    */
    short s1=28;
    short s2;
    short s3,s4,s5;
    unsigned short s6=10,s7=20,s8=40000;
    printf("merhaba %d\n",s1);
    printf("merhaba  %d %d %d \n",s6,s7,s8);
    long ls1=220000000000;
    printf("uzun sayı=%d",ls1);


    
    return 0;
}