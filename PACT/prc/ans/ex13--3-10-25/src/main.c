#include <stdio.h>
//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
void welcome(){
	printf("WELCOME to execute system!!\n");
	printf("This system will get output of this function: S(n) = x^2 + x^4 +...+ x^2n\n");
	printf("\nx-> ");
}
int process(int x,int n){
	int temp=1,sum=0;
	for (int i=1; i<=2*n;i++){
		temp*=x;
		if (i%2==0)
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