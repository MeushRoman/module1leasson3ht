#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n=0;

	/*printf("������ ����� ������� ");
	scanf("%d", &n);*/
	
	do
	{
		printf("������ ����� ������� ");
		scanf("%d", &n);


		if (n == 1) {
			float  x, a, y, z;

			printf("1.	��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������. \n");
			printf("x = ");
			scanf("%f", &x);

			printf("a = ");
			scanf("%f", &a);

			z = a / x;
			x = a*x;

			printf("��������� 1 �� = %d\n ��������� X �� = %d\n", z, x);
		}
		else

			if (n == 2) {
				printf("2.	������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B (����������� A �� ����� 0).\n");

				float a, b, x;

			start:

				printf("������� �������� � = ");
				scanf("%f", &a);

				printf("������� �������� b = ");
				scanf("%f", &b);

				if (a != 0) {
					x = -b / a;
					printf("x = %f\n", x);
				}
				else {
					printf("�������� � ������ ���� ������ 0\n");
					goto start;
				}
			}
			else 
				if (n == 3) {

					printf("3.	� ������ ����� ������ N ������ (N � �����). ����� ���������� ������ �����, ��������� � ������ �����.\n");

					int N = 0;
					float m = 0;

					printf("������� ���������� ��������� ������ = ");
					scanf("%d", &N);

						m = N / 60;

					printf("������ %.0f �����(�)\n", m);

				}
	

	} while (n>0);
}
