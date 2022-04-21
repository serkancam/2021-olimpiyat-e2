#include <stdio.h>
int main()
{
int a,b,c, kup, sayi, k=1;
for(a=1; a<=9; a++)
for(b=0; b<=9; b++)
for(c=0; c<=9; c++)
{
sayi = 100*a + 10*b + c;
/* sayi = abc (üç basamaklı) */
kup = a*a*a + b*b*b + c*c*c; /* kup = a^3+b^3+c^3
*/
if( sayi==kup )
printf("%d. %d\n",k++,sayi);
}
return 0;
}