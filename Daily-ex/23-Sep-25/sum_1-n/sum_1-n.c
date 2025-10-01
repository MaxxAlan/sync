#include <stdio.h>

int main(){
//	int sum;
	int n,acc;		//acculumcation: c?ng d?n
	
	printf("This program will show the summ of n first interger (1...n) \n");


	
	for ( ; ;)
{
	printf("Please type n: ");
	scanf("%d", &n);
	if (n<=1)
		printf("Please type n in range (n>1)\n");
	else
		break;
}
	for(int i=1;i<=n;i++)
		acc+=i;
	
	printf("The result: %d\n",acc);
	
	return 0;
}
