#include <stdio.h>
	int processHex;
	
	int processOct;
	
	int processBin;
//loop
int welcome(){
	int userChoice;
		do{
	printf("1.DEC-> Hex"); scanf("%d",&userChoice);
	
	printf("2.DEC-> OCT"); scanf("%d",&userChoice);

	printf("3.DEC-> BIN"); scanf("%d",&userChoice);
	
	printf("Press 0 to exit."); scanf("%d",&userChoice);
	}
	while (  userChoice !=0 );
}


int loadInput(){
	int userChoice;
	if (userChoice ==1)
		processHex();
	else if (userChoice ==2)
		processOct();
	else if (userChoice==3)
		processBin();
	else 
		return 0;
}




int main(){
	int userChoice = welcome();
	int loadInput();





	getchar();
	return 0;
}
