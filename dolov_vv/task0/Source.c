#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	float x1, y1, r1;
	float x2, y2, r2;
	float rasst;

	setlocale(LC_ALL, "rus");
	printf("������� ���������� ������ ������ ���������� � �� ������");
	scanf("%f %f %f", &x1, &y1, &r1);
	printf("������� ���������� ������ ������ ���������� � �� ������");
	scanf("%f %f %f", &x2, &y2, &r2);

	rasst = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	if (rasst > r1 + r2)
		printf("���������� �� ������������  � �� �������� ���� �����");
	if (rasst > r1 - r2 && rasst > r2 - r1 && rasst < r1 + r2)
		printf("���������� ������������ \n");
	if (rasst == r1 + r2)
		printf("���������� �������� ���� ����� ������� ������� \n");
	if (rasst == r2 - r1 && rasst != 0)
		printf("������ ���������� ������� �� ������ � �������� ��, �� ��� �� ���������  \n");
	if (rasst == r1 - r2 && rasst != 0)
		printf("������ ���������� ������� � ������ � �������� ��, �� ��� �� ���������  \n");
	if (rasst < r2 - r1)
		printf("������ ���������� ������� �� ������, �� �� �������� �� \n");
	if (rasst < r1 - r2)
		printf("������ ���������� ������� � ������, �� �� �������� �� \n");
	if (rasst == 0 && r1 == r2)
		printf("���������� ������� ���� � �����(���������) \n");

	system("pause");
}