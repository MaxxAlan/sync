#include <stdio.h>
main(){

int n;
int remainder;
int sum;
printf("Enter nums: ");
scanf("%d",&n);


sum=0;
//for (block1; condition; task2) task1;
while (n>0){
remainder= n%10;
sum=sum+remainder;
n=n/10;
}



printf("%d",sum);
getchar();
return 0;
}