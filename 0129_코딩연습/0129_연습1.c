
#define BLACK 0;
#define BLUE 1;

#include <stdio.h>
#include <windows.h>


//-- ���� �Լ��� �ʿ��ұ� (Basic)
int int_add(int x, int y);
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);

void printBar(); //--> �дܼ� ���
void printBar2();
void printBar3();

// �ؽ�Ʈ �÷�
void textcolor(int int_foreground, int int_background);

//-- ���α׷� ��Ÿ�� ����Ʈ
int main(void) {

	

	printBar();
	textcolor(BLUE 1, BLACK 0);
	printf("\t\t\t\t\t\tBASIC CACULATOR\n");
	printBar();
	printf("\n\n");

	int num1 = 0, num2 = 0;
	printBar2();
	printf("�ΰ��� ���ڸ� �Է��ϼ���. : ");
	scanf_s("%d %d", &num1, &num2);
	printBar2();
	printf("\n\n");

	printBar3();
	printf("\n");
	printf("\t\t%d + %d = %d", num1, num2, int_add(num1, num2));
	printf("\t\t%d - %d = %d\n", num1, num2, int_minus(num1, num2));
	printf("\t\t%d x %d = %d", num1, num2, int_multi(num1, num2));
	printf("\t\t%d divide %d = %d\n\n", num1, num2, int_divide(num1, num2));
	printBar3();

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
	printf("------------------------------------------------------------------------------------------------------------\n");
}

void printBar3() {
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}


// ���� ������
void textcolor(int int_foreground, int int_background) {
	int color = int_foreground + int_background * 17;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}