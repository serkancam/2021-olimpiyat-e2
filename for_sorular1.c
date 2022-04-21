#include <stdio.h>

int i;
int t,s;

int main()
{
    for(i=0;i<10;)
    printf("%d ",i++);

    printf("\n--------------\n");

    for (t=1,s=0; t<=100; )  
    {
        s += t += 2;
        //t += 2;
        //s += t ;
    }   
    
    
    printf("%d\n",s);

printf("\n--------------\n");
int y,z;
printf("%d -- %d",y,z);


}