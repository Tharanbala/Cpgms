#include <stdio.h>

int main()
{
    int a,c=0;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    printf("%d",c);
    
    return 0;
}
