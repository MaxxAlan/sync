#include <stdio.h>


//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n

void welcome(){
printf("Welcome to execute system!\n");
printf("This system will get output of S(n)= 1/2 + 1/4 + 1/8 +...+ 1/2n \n");
printf("\n");
printf("INPUT-> ");
}

double process(){
int n;
scanf("%d", &n);
double sumPro =0.00;
for (int i=1.00; i<=n; i++){
	sumPro+= 1.00/(2*i);
}
return sumPro;
}

void output(double sumPro){
printf("\n");
printf("OUTPUT: %.4lf",sumPro);
}
int main(){
welcome ();
double result=process();
output(result);



getchar();
return 0;
}