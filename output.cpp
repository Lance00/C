#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf(" has %d digits\n",printf("%d",n));
	char outp[50];
	int ret=sprintf(outp,"%d",n);
	printf("%d\n",ret);
	return 0;
}
