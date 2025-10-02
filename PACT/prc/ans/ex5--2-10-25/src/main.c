#include <stdio.h>


//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

void welcome(){
printf("WELCOME to execute system!\n");
printf("This system will get output of this function S(n) = 1 + 1/3 + 1/5 +...+ 1/(2n + 1)\n");
printf("\n");
printf("INPUT-> ");
}
double process(int n){
double sumPro=0.00;
    for (int i = 0; i <= n; i++) {
        sumPro += 1.00 / (2 * i + 1);
    }
	return sumPro;
	}
	



void output(double sumPro){
printf("\n");
printf("OUTPUT: %.4lf",sumPro);
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