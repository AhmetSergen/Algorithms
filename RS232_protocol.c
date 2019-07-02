#include <stdio.h>
#include <stdlib.h>
//ASB

int main(int argc, char *argv[]) {
	
	int i;
	char str[10];
	printf("Type your massage of bits respecting to RS232 format:\n");
	scanf("%s",str);
	
  //first digit==0,  LSB==1      ,  MSB==1      ,  parity==0   ,  stop bits==1,1  , max 11 bit lenght
	if(str[0]=='0'  && str[1]=='1' && str[7]=='1' && str[8]=='0' && str[9&&10]=='1' && str[11]==NULL){
		printf("Your data bits are : ");
		for ( i=2 ; i<=6 ; i++){
			printf("%c",str[i]);
		}
	}
	else printf("Your massage is not in RS232 format!");
	
	return 0;
}
