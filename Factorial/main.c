#include<stdio.h>

//Factorial
int main(void)
{
	int i;
int Num;
int Sum=1;
scanf("%d",&Num);
for(i=1 ; i<=Num ; i++)
{
	Sum*=i;
}
	printf("%d",Sum);
	return 0;
}
