
#include <stdio.h>
#include<math.h>
int main()
 {
    int fact=1, i,n;
    printf("enter a value ");
    scanf ("%d",&n);
   
    for(i=1;i<=n;i++)
    {
        fact= fact*i;
    }
    printf("the factorial value of given number= %d",fact);
    return 0;

 }
