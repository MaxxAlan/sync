#include <stdio.h>
//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

void welcome(){
	printf("WELCOME to execute system!!\n");
	printf("This system will get output of this function: S(n) = x + x^3 + x^5 +...+ x^2n + 1\n");
	printf("\nx-> ");
}
int process(int x,int n){
	int temp=1,sum=0;
	for (int i=1; i<=(2*n)+1;i++){
		temp*=x;
		if (i%2==1)
			sum+=temp;
	}
	return sum;
}
void output(int sum){
	printf("OUTPUT: %d",sum);
}
int main(){
	welcome();
	int x,n;
	scanf("%d",&x);
	printf("n-> ");
	scanf("%d",&n);
	int result=process(x,n);
	output(result);
	getchar();
	return 0;
}