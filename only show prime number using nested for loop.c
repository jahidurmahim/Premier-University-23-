#include<stdio.h>

int main()

{
    int i,j,m,n,k;

     printf("Enter the number\n");
     scanf("%d%d", &m,&n);

       for (j=m; j<=n; j++)
       {
         k=0;
           for (i=2; i<j; i++)
            {

              if(j%i==0)
               {
                   k=1;
                    // we can use k++ instead of k=1
                   break;
               }
            }
                 if(k==0)
                  {
                      printf("The prime number is=%d\n",j);
                  }

       }
return 0;


}
