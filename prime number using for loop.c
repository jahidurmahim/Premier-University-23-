#include<stdio.h>

int main()

{
    int a,b,c=0;

    printf("Enter the value:\n");

    // i is use only for continue the loop.

    scanf("%d", &b);

    for (a=2; a<b; a+=1)




        if (b%a==0)
        {
           c=1;
           // c is use for quatient value.
           break;
        }
           if (c==0)

            printf("This is a prime number=%d\n",b);

           else
           {
            printf("This is not a prime number=%d\n",b);
           }







return 0;
}
