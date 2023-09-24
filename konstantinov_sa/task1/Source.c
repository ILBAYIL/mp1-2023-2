#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float x1, y1, r1, x2, y2, r2 = -1.0f;
	printf("������� ���������� ������ ������ ���������� (x, y), � ����� � ������ ����� �������\n");
	scanf_s("%f %f %f", &x1, &y1, &r1);
	printf("������� ���������� ������ ������ ���������� (x, y), � ����� � ������ ����� �������\n");
	scanf_s("%f %f %f", &x2, &y2, &r2);

	if (r1 < 0 || r2 < 0) { //����� ����������� ����� scanf �� ���� ��������� ������� �������� �������� � �������� r1, r2 �������� �������������� � �������������
		printf("�������� ����!\n"); 
		system("pause");
		return -1;
	}

	float vx = x1 - x2;
	float vy = y1 - y2;
	float dist = sqrt(vx * vx + vy * vy);

	if (dist > r1 + r2) {
		printf("���������� �� ������������");
	}
	else if (dist == 0 && r1 != r2) {
		printf("������ ����������� ���������, ���� ��������� ������ ������");

	}
	else if (dist == 0 && r1 == r2) {
		printf("���������� ���������");

	}
	else if (dist == r1 + r2) {
		printf("���������� �������� � ����� ����� �������");
	}
	else if (dist == fabs(r1 - r2)) {
		
		printf("���� ���������� ��������� ������ ������, �������� � ����� �����");
	}
	else if (dist < fabs(r1 - r2)) {
		printf("���� ���������� ��������� ������ ������, ��� �� ��������");
	}
	else {
		printf("���������� ������������ � ���� ������");
	}

	printf("\n");
	system("pause");
	return 0;
	
}