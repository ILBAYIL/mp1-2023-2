#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "rus");
	
	float x1,x2,y1,y2,r1,r2, L;
	
	printf("������� ���������� � � � ������ ����������: ");
	scanf("%f %f", &x1, &y1);
	
	printf("������� ���������� � � � ������ ����������: ");
	scanf("%f %f", &x2, &y2);
	
	printf("������� ������ �����������: ");
	scanf("%f %f", &r1, &r2);

	L = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	
	if (L == (r1 + r2)) {
		printf("������� ������� ");
	}

	else if ((L == fabs(r1 - r2)) && ((x1 != x2) || (y1 !=y2))) {
		printf("���������� ������� ");
	}

	else if ((L < fabs(r1 - r2)) && ((x1 != x2) || (y1 != y2))) {
		printf("���� ���������� ��������� ������ ������ � ������ �� ��������� ");
	}

	else if (L > (r1 + r2)) {
		printf("���� ���������� �� �������� ������ ");
	}

	else if ((L == 0) && (r1 == r2)) {
		printf("���� ���������� ��������� � ������ ");
	}

	else if ((L == 0) && (r1 != r2)) {
		printf("���� ���������� ��������� ������ ������ � ������ ��������� ");
	}
	
	else if ((L < (r1 + r2)) && (L > abs(r1 - r2))) {
		printf("���� ���������� ���������� ������ � 2 ������ ");
	}

	system("pause");
}