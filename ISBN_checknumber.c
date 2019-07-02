#include <stdio.h>
#include <stdlib.h>
//ASB

int main(int argc, char *argv[]) {
	
	char ISBN[10];
	
	while(1){	
		printf("Enter ISBN number:\n");
		scanf("%s",ISBN);
	
		printf("\n");
		printf("Group Number:%c%c \n",ISBN[0],ISBN[1]);
		printf("Publisher Number:%c%c%c%c \n",ISBN[2],ISBN[3],ISBN[4],ISBN[5]);
		printf("Product Number:%c%c%c \n",ISBN[6],ISBN[7],ISBN[8]);
		printf("Check Digit:%c \n\n",ISBN[9]);
	}
	return 0;
}
