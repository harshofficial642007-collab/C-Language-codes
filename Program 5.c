#include<stdio.h>
int main (){
	int num;
	printf("Eneter value of num :");
	scanf("%d", &num);
	switch (num){
		case 1:
			printf(" You entered value 1\n");
			break;
		case 2:
			printf(" You entered value 2\n");
			break;
		case 3:
			printf(" You entered value 3\n");
			break;
		default:
			printf(" Input value is other than 1,2 and 3");
			
	}
	
	return 0;
	
}