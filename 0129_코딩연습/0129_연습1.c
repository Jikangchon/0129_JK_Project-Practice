#include <stdio.h>


//-- ���� �Լ��� �ʿ��ұ� (Basic)
int int_add(int x, int y);
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);

void printBar(); //--> �дܼ� ���
void printBar2();
void printBar3();


//-- ���α׷� ��Ÿ�� ����Ʈ
int main_01(void) {

	printBar();
	printf("\t\t\t\t\t B A S I C    C A C U L A T O R \n");
	printBar();
	printf("\n\n");

	int num1 = 0, num2 = 0;
	printBar2();
	printf("�ΰ��� ���ڸ� �Է��ϼ���. : ");
	scanf_s("%d %d", &num1, &num2);

	
	
	printf("\n\n\n");

	printf("����� ��� ����Դϴ� -->\n");
	printBar3();
	printf("\n");
	printf("\t\t%d + %d = %d", num1, num2, int_add(num1, num2));
	printf("\t\t\t\t\t\t%d - %d = %d\n\n", num1, num2, int_minus(num1, num2));
	printf("\t\t%d x %d = %d", num1, num2, int_multi(num1, num2));
	printf("\t\t\t\t\t\t%d divide %d = %d\n\n", num1, num2, int_divide(num1, num2));
	printBar3();

	printf("\n\n\n\n\t\t\t\t\t\t\t���α׷��� �����Ͻ÷��� �ƹ�Ű�� ��������");
	printf("\n\n\n");


		 

	return 0; 
}

//-- �Լ� ������

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


