
#include<stdio.h>
int main()
{
int p,x,amount;
printf("enter the price x and discount p of the coffee");
scanf("%d%d",&x,&p);
if(x<=10000 && p<= 100)
{
amount=x*(100-p)/100;
printf("the discount amount is %d",amount);
}
else{
printf("the amount is invalid");
}
return 0;
}
