#include <stdio.h>

//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
void welcome(){
printf("WELCOME to execute system\n");
printf("This system will get output of this function: S(n) = 1 + 1.2 + 1.2.3 +...+ 1.2.3.. .N \n");
}

int process(int n){
int sum =0;
int temp=1;
for (int i=1; i<=n;i++){
temp = i*temp;
sum = sum+temp;
}
return sum;
}

void output(int sum){
printf("\nOUTPUT: %.0d", sum);
}
int main(){
welcome();
printf("\n-> ");
int n;
scanf("%d",&n);
double result= process(n);
output(result);
getchar();
return 0;
}