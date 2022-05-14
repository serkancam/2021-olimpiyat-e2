#include <stdio.h>
int s[10], i = 0;
void pu(int x)
{
    s[i] = x;
    i++;
}
int po()
{
    i--;
    return s[i];
}
void main()
{
    pu(2);
    pu(0);
    pu(1);
    pu(5);
    printf("%d ", po());
    printf("%d ", po());
    pu(po());
    po();
    printf("%d", po());
}