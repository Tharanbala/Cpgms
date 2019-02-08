#include <stdio.h>

int main()
{
    int a,b,c[100],i,s=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
     scanf("%d",&c[i]); 
    }
    for(i=0;i<b;i++)
    {
     s=s+c[i];
     
        
    }
    printf("%d",s);
    return 0;
}
