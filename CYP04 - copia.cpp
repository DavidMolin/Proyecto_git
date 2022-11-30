#include <stdio.h>
#include <math.h>

int main()
{
	double limiteinicial, limitefinal, incremento;

	double RESx, iteracciones;
	double ResE = 0;
	double resA=0;

	int s=1;

	int a=0;
	int b=0;
	int c=0;
	int factorial;


	scanf_s("%lf", &limiteinicial);
	scanf_s("%lf", &limitefinal);
	scanf_s("%lf", &incremento);
	scanf_s("%i", &s);

while{
	if (limiteinicial <= 0 && limitefinal == 0 && incremento == 0)
	{
		
		printf("%lf %lf %lf\n", limiteinicial, limitefinal, incremento );


	}
        if (limiteinicial >= 0 && limitefinal == 1 && incremento == 0)
	{
		
		printf("%lf %lf %lf\n", limiteinicial, limitefinal, incremento );


	}
}
	else if (limiteinicial > limitefinal) {
		return 1;
	}
	for (RESx = limiteinicial; RESx <= limitefinal; RESx = limiteinicial + (incremento * b))
	{
		for (iteracciones = limiteinicial; iteracciones <= limitefinal; iteracciones = limiteinicial + (incremento * c))
		{
			if (a == 0)
			{
				factorial = 1;
			}
			else
			{
				factorial = 1;
				for (int i = 1; i <= a; i++)
				{
					factorial = factorial * i;
				}
			}
			ResE = ResE + (pow(RESx, a) / factorial);
			a++;
			c++;
		}
		c = 0;
		printf("%lf %lf %lf\n", RESx, ResE, exp(RESx));
		a = 0;
		ResE = 0;
		b++;
             printf("%lf %lf %lf\n", RESx, ResE, exp(RESx));
		a = 0;
		ResE = 0;
		b++;
		S++;
	}
}
