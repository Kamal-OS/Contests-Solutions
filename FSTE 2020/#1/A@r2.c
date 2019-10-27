#include <stdio.h>

int main()
{
	// s=(r1+r2)/2 => r2=2*s-r1
	int r1, s;
	scanf("%d %d",&r1,&s);
	printf("%d",2*s-r1);
}