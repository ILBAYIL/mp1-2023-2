#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	float x1, y1;
	float x2, y2;
	float r1, r2;
	float S;

	setlocale(LC_ALL, "rus");

	printf("������� ���������� ������ ���������� (x1,y1): ");
	scanf("%f %f", &x1, &y1);
	printf("������� ������ ������ ���������� (r1): ");
	scanf("%f", &r1);

	printf("������� ���������� ������ ���������� (x2,y2):");
	scanf("%f %f", &x2, &y2);
	printf("������� ������ ������ ���������� (r2): ");
	scanf("%f", &r2);

	S = sqrtf(powf(fabs(x2 - x1), 2) + powf(fabs(y2 - y1), 2));

	if (S > r1 + r2)
	{
		printf("���������� �� ������������");
	}

	if (S < fabs(r1 - r2))
	{
		printf("���� �� ����������� ���������� ������ ������");
	}

	if (S == r1 + r2)
	{
		printf("���������� �������� ���� ����� � ����� ����� (������� �������)");
	}

	if (S == fabs(r1 - r2) && !(x1 == x2 && y1 == y2 && r1 == r2))
	{
		printf("���������� �������� ���� ����� � ����� ����� (���������� �������)");
	}

	if (fabs(r1 - r2) < S && S < r1 + r2)
	{
		printf("���������� ������������ � ���� ������");
	}

	if (x1 == x2 && y1 == y2 && r1 == r2)
	{
		printf("���������� ���������");
	}

	system("pause");
}