#include <stdio.h>








//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
void welcome(){
	printf("Welcome to Sum system!\n");
	printf("Please type your number you want to sum\n");
	printf("-> ");
}

int process(){
	int n;
	int sum =0;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;  
        }
        if (n > 0) {
        	printf("-> ");
            sum += n;  
        }
    }
    return sum;

}
void output(int sum){
	    printf("SUM= %d\n",sum);
}
//loi bai hoc:
//sum trong hàm process() chưa được khởi tạo. Nó sẽ chứa giá trị rác.
//Bạn khai báo output(int sum) nhưng không có kiểu trả về (theo chuẩn phải là void output(int sum)).
//Trong main(), bạn gọi process(); nhưng không lưu giá trị trả về.
//Sau đó lại gọi output(&sum) nhưng sum không tồn tại ở phạm vi main. 
// Ngoài ra &sum là địa chỉ, trong khi hàm output() nhận giá trị.

// thay doi can thiet: khoi tao 1 bien moi o main de chua gia tri tra ve cua process()
// luu bien do thanh gia tri cua ham output()
//	int result=process();
//	output(result);





int main(){
	welcome();
	int result=process();
	output(result);
	
	getchar();
	return 0;
}