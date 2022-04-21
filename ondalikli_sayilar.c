#include <stdio.h>

int main()
{
    float f1=1.1242;
    double d1=1.12345678901;
    printf("f1=%f\n",f1);
    printf("d1=%e\n",d1);

    //ondalıklı kısım basamak adedini belirlemek
    printf("f1=%.3f\n",f1);

    float f2=30;
    int b=22545.8784;
    printf("b=%d\n",b);

    float f3= 3/2.0+2.0;
    printf("f3=%f\n",f3);
    return 0;
}