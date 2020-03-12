#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
   
    for(a=1;a<=9;a++)
    {
    	for(b=1;b<=a;b++)
    	{
    		//b==1||printf("\t");
    		printf("%d*%d=%d\t",b,a,b*a);
		}
		
		printf("\n");
	}
	
    
    return 0;
}
