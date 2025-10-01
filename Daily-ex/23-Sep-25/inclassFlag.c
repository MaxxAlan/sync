#include <stdio.h>
#include <stdlib.h>
int main(){
//	int sum;
	int total=0;
	int value;
	int keepReading=1;

	for(int i=0;i<10 &&keepReading== 1;i++){
		printf("Enter an interger (0 to stop): ");
		scanf("%d", &value);
		if (value==0){
			keepReading =0;
		}
		else
			total+=value;
		
	}
	
	printf("The total entered is: %d\n", total);
	system("pause");
	return 0;
}
