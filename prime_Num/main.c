#include<stdio.h>
void Prime(int Num)
{
	int i;
	if(Num == 1)
	{
		printf("not Prime");
        return;
	}
		for(i=2 ; i<10 ; i++)
		{
			if(Num != i)
			{
			if(Num%i == 0)
			{
				printf("Not Prime");

				return;
			}
		}
		}
			printf("Prime");
}
int main(void)
{
	Prime(6);
	return 0;
}
