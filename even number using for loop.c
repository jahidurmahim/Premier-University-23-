#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the numbers range:\n");
    scanf("%d%d",&a,&b);

     for ( a; a<=b; a++)
       if ( a % 2 == 0)
       {
        printf("%d\n", a);

       }

     return 0;

}
