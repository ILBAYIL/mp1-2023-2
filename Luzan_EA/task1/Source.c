#include <stdio.h>
#include <math.h>
#include <locale.h>
// �� ��������

void main() {
	setlocale(LC_ALL, "rus");
	float r, R, p; // ����� ������, ������� ������, ����������
	float x1, x2, y1, y2;

	scanf_s("%f %f %f", &x1, &y1, &R);
	scanf_s("%f %f %f", &x2, &y2, &r);

	//����������� ������������� �������

	if (r > R) {
		p = R;
		R = r;
		r = p;
	}

	p = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	//printf_s("%f", p);
	


	
	if ((R + r > p) && (R < p)) { printf_s("���������� ����������� \n"); }
	if (p > r + R) { printf_s("������� �� ����������� �� ����� ������ ������, �� ��������, �� ������������ \n"); }
	if (R == p + r) { printf_s("���������� ������� \n"); }
	if (R + r == p) { printf_s("������� ������� \n"); }
	if ((p + r < R) && (R > p)) { printf_s("���� ���������� ����� � ������ \n"); }
	if ((p == 0) && (r != R)) { printf_s("������� ������ � �� ������� ������� \n"); }
	if ((p == 0)&&(r == R)) { printf_s("������ ���������� \n"); }
	


	system("pause");
}
