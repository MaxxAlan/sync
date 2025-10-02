#include <stdio.h>

//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2

void welcome(){
	printf("Welcome to execute system!!\n");
	printf("This system will get output of this function: S(n) = 1/2+ 3/4 + 5/6 +...+ 2n + 1/ 2n + 2 \n");
	printf("\n-> ");
}
double process(int n){
	double sumPro=0;
		for (int i=0; i<=n;i++){
			sumPro+= (double)(2*i+1)/(2*i+2);
	}
	return sumPro;
}
void output(double sumPro){
	printf("\nOUTPUT: %.4lf",sumPro);
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