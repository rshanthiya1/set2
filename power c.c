#include<stdio.h>
int main(){
  int pow,num,i=1;
  long int sum=1;
  printf("enter a number: ");
  scanf("%d",&num);
  printf("Enter power: ");
  scanf("%d",&pow);
  while(i<=pow){
            sum=sum*num;
            i++;
  }
  printf("%d to the power %d is: %ld",num,pow,sum);
return 0;
