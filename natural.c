#include <stdio.h>

int main()
{
    int a,i,c=0,d=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        c++;
        d=d+c;
    }
    printf("%d",d);
    return 0;
}
