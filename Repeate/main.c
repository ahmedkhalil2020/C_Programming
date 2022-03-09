#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define SIZE 5
int summation(char* Str);
int main(void)
{
	char Array[SIZE]={'a','b','c','d','C'};
	int Res=summation(Array);
	printf("%d",Res);

	return 0;
}
int summation(char* Str)
{
	int i,j;
	int Sum=0;
	for(i=0 ; Str[i] != '\0' ; i++)
	{
		for(j=i+1 ; Str[j] != '\0' ; j++)
		{
			if(Str[i] == Str[j])
			{
				return FALSE;
			}
		}
	}
	return TRUE;
}
