#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int bit;
	int node=-1;
    int matrix[5][2]= {{0,1},
					   {2,3},
					   {4,0},
					   {1,2},
					   {3,4}};
					  
	while(1){
		printf("Type a bit : \n");
		scanf("%d",&bit);
		
		if(node!=-1 || bit!=0){
			if ((node/2)>0){
				node=node+2;
			}else node++; 
			
			node=node%5;
			printf("Remaining %d\n",matrix[node][bit]);
		}
		else{
			printf("Remaining 0\n");
		}
    }			  
	return 0;
}
