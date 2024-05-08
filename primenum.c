#include <stdio.h>
int prime(int num){
if(num<=1)
{ return 0;
}
for(int i=2;i*i<=num;i++){
    if(num%i==0){
        return 0;
    }
}
return 1;
}
int main(){
int num;
printf("enter a number:");
scanf("%d",&num);
if(prime(num))
printf("the number is a prime number %d", num);
 else 
 printf("the number is not prime %d",num);
 return 0;
}
