#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a + b = %d\n", a + b);
	int c = a - b;
	printf("a - b = %d\n", c);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("\nBitwise\n");
	printf("a | b = %d\n", a | b);
	printf("a & b = %d\n", a & b);
	printf("a ^ b = %d\n", a ^ b);
	printf("a << b = %d\n", a << b);
	printf("a >> b = %d\n", a >> b);
	// a * a
	// a * a * a
	printf("sqrt(10) = %lf\n", sqrt(10));
	printf("pow(10, 1/3) = %lf\n", pow(10, 1.0 / 3.0));
	printf("%.17lf\n", 0.7);
	printf("0.7 * 0.7 * 0.7 = %.17lf\n", 0.7 * 0.7 * 0.7 + 0.000000000000001);

	printf("Hexa  a = %x\n", a);
	printf("Octal a = %o\n", a);
	return 0;
}
