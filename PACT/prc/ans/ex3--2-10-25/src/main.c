#include <stdio.h>


//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n

void welcome(){
printf("Welcome to execute system!\n");
printf("This system will get output of S(n)= 1 + 1/2 + 1/3 +...+ 1/n \n");
printf("\n");
printf("INPUT-> ");
}

double process(){
int n;
scanf("%d", &n);
float sumPro =0.00;
for (int i=1.00; i<=n; i++){
	sumPro= 1.00/i+sumPro;
}
return sumPro;
}

void output(double sumPro){
printf("\n");
printf("OUTPUT: %.4f",sumPro);
}
int main(){
welcome ();
double result=process();
output(result);



getchar();
return 0;
}