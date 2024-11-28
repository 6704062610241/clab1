#include<stdio.h>
int main() {
	int num1;
	int num2;
	printf("n1=");
	scanf("%d", &num1);
	printf("n2=");
	scanf("%d", &num2);
	if (num1>num2){
		printf("n1 %d greater than n2", num1-num2);
	} else{
		printf("n2 %d greater than n1", num2-num1);
	}

}
