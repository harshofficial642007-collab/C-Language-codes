#include<stdio.h>
int main(){
	
	int num =0;
	while (num<=100){
		printf(" Value od variable is : %d \n ",num);
		if (num==2){
			break;
		}
		num++;
	}
	printf(" Out of the While-loop");
	return 0;
}