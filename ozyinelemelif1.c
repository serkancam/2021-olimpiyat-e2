#include <stdio.h>

int f(int s)
{    
    if(s==0)
        return 0;
    printf("%d\n",s);
    f(s-1);
}
int f2(int s)
{    
    if(s==0)
        return 0;    
    f2(s-1);
    printf("%d\n",s);
}


int main()
{

    f(3);
    printf(" f bitti\n");
    f2(3);
    printf("f2 bitti");

    return 0;
}