#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	double result;
	double PI_2 = asin(1);
	const double PI = 3.141592653589793;
	float i;
	/* printf("Input angle:",i);
	 scanf("%d",i);   */
	for (i = 0.00000001; i <= 10; i = i + 0.00001)
	{
		result = cos(PI*i);
		printf("The cosine of %f *PI is %f \n", i, result);
	}
	_getch();
	return 0;
}

