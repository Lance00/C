#include <stdio.h>
#include <stdlib.h>
char str[100];
int main()
{
	char str[50];
	scanf("%[^\n]s",str);//not \n
	printf("%s\n",str);
	return 0;
}
	


