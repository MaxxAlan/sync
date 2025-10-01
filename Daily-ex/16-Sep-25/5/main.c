#include <stdio.h>
int exeRun(){
	char systemChoice;
	printf("Welcome to EXE Calculator.\n");
	printf("..........................\n");
	printf("What do you want: 1.Calculator Shape or 2.Count Days engine.\n");
	printf("Exit by press: 0\n");
	printf("Your Choice is: ");
	scanf("%c",&systemChoice);
}
int subExe(){
	int subExe;
}
void choiceShape(){
	char shapeChoice;
	printf("Choice shape: 1.Square 2.Cricle 3.Rectangle 4.Tranggle");
	scanf("%c",&shapeChoice);
	
	
	if (shapeChoice == 1){
		printf("Calculator Square.\n");
	}
	else if (shapeChoice ==2){
		printf("Calculator Cricle.\n");	
	}
	else if (shapeChoice ==3){
		printf("Calculator Rectangle.\n");	
	}
	else if (shapeChoice ==4){
		printf("Calculator Tranggle.\n");	
	}
	else {
		printf("Please type excatly choice in rule.");
		return 0;
	}	
}

void calculateShape(){
	float width,length,area,perimeter,litter;
}


int countDays(){
	printf("Hello costumer. Glad god for you.\n");
	printf("Type your month you want to know days in it.\n");
}

int main() {
    int choice;
    do {
        choice = exeRun();
        if (choice == 1) {
            choiceShape();
        } else if (choice == 2) {
            countDays();
        } else {
            printf("Invalid choice.\n");
        }
    } 

    return 0;
}