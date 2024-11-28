#include<stdio.h>
int main() {
	int num1;
	int num2;
	printf("n1");
	scanf("%d", &num1);
	printf("n2");
	scanf("%d", &num2);
	if (num1>num2){
		printf("num1 %d greater than num2", num1-num2);
	} else{
		printf("num2 %d greater than num1", num2-num1);
	}

}
