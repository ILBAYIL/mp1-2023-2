#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	float r1, r2, x1, x2, y1, y2, D;
	setlocale(LC_ALL, "rus");
	printf("������� ������� ����������� 1 � 2\n");
	scanf("%f %f", &r1, &r2);
	printf("������� ���������� ������ ������ ����������\n");
	scanf("%f %f", &x1, &y1);
	printf("������� ���������� ������ ������ ����������\n");
	scanf("%f %f", &x2, &y2);
	D = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	if (D > r2 + r1){
		printf("���������� �� ��������  ");
	}
	else if (D == r1 + r2){
		printf("���������� �������� �������  ");
	}
	else if ((D < r1 + r2) && (D > fabs(r1 - r2))){
		printf("���������� ������������ � ���� ������  ");
	}
	else if (x1 == x2 && y1 == y2 && r1 == r2){
		printf("���������� ���������  ");
	}
	else if ((D == fabs(r1 - r2))){
		printf("���������� �������� �������  ");
	}
	else if ((D < fabs(r1 - r2))){
		printf("���������� �� ��������, ������ ���� ����� ������ ������  ");
	}
	
	system("pause");

}