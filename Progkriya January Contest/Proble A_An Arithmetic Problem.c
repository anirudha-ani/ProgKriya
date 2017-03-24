#include <stdio.h>

void main ()
{
    int a1;
    int a2;
    int a3;
    int n;
    int x;
    int l;

    scanf("%d", &l);

    int i ;

    for(i = 0; i<l ; i++)
    {
    scanf ("%d %d %d %d",&a1,&a2,&a3,&n);


    if(a2-a1 != a3-a2)
    {
        printf("Case %d: Error\n",i+1);
    }
    else
    {
        x = a1 +(n-1)*(a2-a1);
        printf("Case %d: %d\n", i+1,x);
    }
    }
}
