#include <stdio.h>
//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
void welcome(){
	printf("WELCOME to execute system!!\n");
	printf("This system will get output of this function: S(n) = x + x^2 + x^3 +...+ x^n\n");
}
int process(int n,int x){
	int sum=0, temp=1;
	for (int i=1;i<=n;i++){
		temp *=x;
		sum +=temp;
	}
	return sum;
}
void output(int sum){
	printf("OUTPUT: %d",sum);
}
int main(){
	welcome();
	int n,x;
	printf("x: ");
	scanf("%d",&n);
	printf("n: ");
	scanf("%d",&x);
	int result= process(n,x);
	output(result);
	getchar();
	return 0;
}
