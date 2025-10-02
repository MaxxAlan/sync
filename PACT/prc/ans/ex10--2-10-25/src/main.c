#include <stdio.h>
//Bài 10: Tính T(x, n) = x^n

void welcome(){
printf("WELcome to execute system\n");
printf("This system will get output of this function: T(x, n) = x^n \n");
}

double process(int x, int n){
double sumPro=1;
for (int i=0; i<=n; i++){
	sumPro*= x;
}
return sumPro;
}
void output(double sumPro){
printf("\nOUTPUT: %.0lf", sumPro);
}
int main(){
welcome();
int x,n;
printf("x-> ");
scanf("%d", &x);
printf("n-> ");
scanf("%d",&n);
double result=process(x,n);
output(result);
getchar();
return 0;
}