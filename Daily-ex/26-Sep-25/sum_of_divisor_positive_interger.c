#include <stdio.h>
int input(){
	int n;
	do {
		printf("Please type positive number: ");
		scanf("%d",&n);
		if (n<=0){
			printf("FUK, Do you know about positive interger! ");	
		}
	}
	while (n<=0);	
	return n;
}

int process(int n){
	int sum=0;
	printf("These devisor of %d is: ",n);
	for (int i=1;i<=n;i++)
		if (n%i==0){
			printf ("%d ",i);	
			sum+=i;
			}
	printf("\n");
	return sum;
}

void result(int sum){
	printf("Your result: %d",sum);
}

int main(){
	
	int n =input();
	int sum =process(n);
	result(sum);
	return 0;
}