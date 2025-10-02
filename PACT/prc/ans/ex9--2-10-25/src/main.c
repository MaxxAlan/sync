#include <stdio.h>

//Bài 9: Tính T(n) = 1 x 2 x 3…x N

void welcome(){
	printf("Welcome to execute system!!\n");
	printf("This system will get output of this function: T(n) = 1 x 2 x 3...x N \n");
	printf("\n-> ");
}
double process(int n){
	double sumPro=1;
		for (int i=1; i<=n;i++){
			sumPro*=i;
	}
	return sumPro;
}
void output(double sumPro){
	printf("\nOUTPUT: %.lf",sumPro);
}
int main(){
	welcome();

		int n;
		scanf("%d",&n);

	double result=process(n);
	output(result);
	getchar();
	return 0;
}