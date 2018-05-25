#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n=0;

	/*printf("Введие номер задания ");
	scanf("%d", &n);*/
	
	do
	{
		printf("Введие номер задания ");
		scanf("%d", &n);


		if (n == 1) {
			float  x, a, y, z;

			printf("1.	Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет. \n");
			printf("x = ");
			scanf("%f", &x);

			printf("a = ");
			scanf("%f", &a);

			z = a / x;
			x = a*x;

			printf("Стоимость 1 кг = %d\n Стоимость X кг = %d\n", z, x);
		}
		else

			if (n == 2) {
				printf("2.	Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).\n");

				float a, b, x;

			start:

				printf("Введите значение а = ");
				scanf("%f", &a);

				printf("Введите значение b = ");
				scanf("%f", &b);

				if (a != 0) {
					x = -b / a;
					printf("x = %f\n", x);
				}
				else {
					printf("значение А должно быть больше 0\n");
					goto start;
				}
			}
			else 
				if (n == 3) {

					printf("3.	С начала суток прошло N секунд (N — целое). Найти количество полных минут, прошедших с начала суток.\n");

					int N = 0;
					float m = 0;

					printf("Введите количество пройденых секунд = ");
					scanf("%d", &N);

						m = N / 60;

					printf("прошло %.0f минут(ы)\n", m);

				}
	

	} while (n>0);
}
