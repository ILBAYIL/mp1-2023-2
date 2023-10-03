#include <stdio.h>
#include <locale.h>
#include <math.h>


float max(float x, float y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

float min(float x, float y) {
	if (x > y) {
		return y;
	}
	else {
		return x;
	}
}

void main() {
	float x1, y1, r1, x2, y2, r2;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� � ������ ������ ����������: ");
	scanf_s("%f %f %f", &x1, &y1, &r1);
	printf("������� ���������� � ������ ������ ����������: ");
	scanf_s("%f %f %f", &x2, &y2, &r2);
	// �������� ������, �������� �������, ���������, �� ��������, ������������
	double rasst = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	if (x1 == x2 && y1 == y2 && r1 == r2) {
		printf("���������� ���������. ");
	}
	else if (rasst > (r1 + r2)) { // �� ��������
		printf("���������� �� �������� � �� ������������, ������� �� ����������� �� ��������� ������ ������. ");
	}
	else if (rasst == (r1 + r2)) {
		printf("���������� �������� �������. ");
	}
	else if (rasst == fabs(r1 - r2)) {
		printf("���������� �������� ������. ");
	}
	else if (x1 == x2 && y1 == y2 && r1 != r2) {
		printf("������ ����������� ���������, ������� �� ���������. ");
	}
	else if ((rasst < max(r1, r2)) && (max(r1, r2) > rasst + min(r1, r2))) {
		printf("���� ���������� ������ ������. ");
	}
	else {
		printf("���������� ������������. ");
	}
	system("pause");

}