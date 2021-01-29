#include <stdio.h>


//-- 무슨 함수가 필요할까 (Basic)
int int_add(int x, int y);
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);

void printBar(); //--> 분단선 출력
void printBar2();
void printBar3();


//-- 프로그램 스타팅 포인트
int main_01(void) {

	printBar();
	printf("\t\t\t\t\t B A S I C    C A C U L A T O R \n");
	printBar();
	printf("\n\n");

	int num1 = 0, num2 = 0;
	printBar2();
	printf("두개의 숫자를 입력하세요. : ");
	scanf_s("%d %d", &num1, &num2);

	
	
	printf("\n\n\n");

	printf("당신의 계산 결과입니다 -->\n");
	printBar3();
	printf("\n");
	printf("\t\t%d + %d = %d", num1, num2, int_add(num1, num2));
	printf("\t\t\t\t\t\t%d - %d = %d\n\n", num1, num2, int_minus(num1, num2));
	printf("\t\t%d x %d = %d", num1, num2, int_multi(num1, num2));
	printf("\t\t\t\t\t\t%d divide %d = %d\n\n", num1, num2, int_divide(num1, num2));
	printBar3();

	printf("\n\n\n\n\t\t\t\t\t\t\t프로그램을 종료하시려면 아무키나 누르세요");
	printf("\n\n\n");


		 

	return 0; 
}

//-- 함수 구현부

int int_add(int x, int y) {
	return x + y;
}

int int_minus(int x, int y) {
	return x - y;
}

int int_multi(int x, int y) {
	return x * y;
}

int int_divide(int x, int y) {
	return x / y;
}

void printBar() {
	printf("\t\t\t\t===============================================\n");
}

void printBar2() {
	printf("----------------------------------------------------------------------------------------------------------\n");
}

void printBar3() {
	printf("............................................................................................................\n");
}


