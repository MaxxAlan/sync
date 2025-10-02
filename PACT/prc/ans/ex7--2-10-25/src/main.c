#include <stdio.h>


//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1

void welcome(){
printf("Welcome to execute system!\n");
printf("This system will get output of this function: S(n) = 1/2 + 2/3 + 3/4 + ... + n / n + 1 \n");
printf("\n-> ");
}
double process(int n){
double sumPro=0;
for (int i=0; i<=n;i++){
sumPro+= (double)i/(i+1.0); 			//Sua loi o bai tap: dung (double) để ép giá trị trả về phải theo kiểu ...
}										// Hoac co the sua nhu them 1.0 vao gia tri de C tu dong nhan biet dang so thap phan.
return sumPro;
}
void output(double sumPro){
printf("\n");
printf("OUTPUT: %.4lf", sumPro);
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