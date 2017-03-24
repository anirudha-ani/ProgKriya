#include <stdio.h>

void main()
{
    int count ,i,j,num;

    double sum,input ;

    scanf("%d",&count);

    for(i = 0; i< count ; i++)
    {
        scanf("%d",&num);
        sum = 0.0;
        for(j=0; j< num ; j++)
        {
            scanf("%lf", &input);
            sum = 1.0*sum + 1.0/num*input;
        }
        printf("%f\n",sum);
    }
}
