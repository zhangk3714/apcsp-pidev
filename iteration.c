#include <stdio.h>

int main()
{
	int num;
	printf("Enter a value : ");
	scanf("%d", &num);
	int a = 0;
	while ( a < 100 )
	{
	a++;
	if ( a % num == 0 )
	printf("%d\n", a);
	}
}
