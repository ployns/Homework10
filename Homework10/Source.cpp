#include<stdio.h>
int main()
{
	int x, y = 0;
	scanf_s("%d", &x);
	while (x != 0)
	{
		y += x % 10;
		x = x / 10;
		if (y >= 10 && x == 0) {
			printf("%d \n", y);
			x = y;
			y = 0;
		}
		else if (y < 10 && x == 0) {
			printf("%d ", y);
		}
	}
}
