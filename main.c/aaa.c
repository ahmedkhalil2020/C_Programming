//printf("%d",sizeof(2e3L));
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#define SIZE 10
#define Null (void*)0
#define RW 0x1FFF7800
//a
int Power(int Num);
int main (void)
{

	Power(5);
return 0;
}
int Power(int Num)
{

	int i,j;
	for(i=1 ; i<=Num ; i++)
	{
		for(j=i ; j<Num ; j++)
		{
			printf(" ");
		}
		for(j=0 ; j<(i*2)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}


}
/*
int g_Array[100];
int *If_Or_Not(int Low , int High , int *Size_Arr);

int main(void)
{
	int vaa =NULL;
int Array[SIZE]={1,2,3,4,5,6,7,8,9,10};
//char Str[5]={'A','b','C','B','\0'};
int Res;
int Num;
int *Ptr=NULL;
int i;
Ptr=If_Or_Not(2,8,&Num);
for(i=0 ; i<Num ; i++)
{
printf("%d ",Ptr[i]);
}
return 0;
}
int *If_Or_Not(int Low , int High , int *Size_Arr)
{
	int i;
	if((Low >= High) || (Low == High-1))
	{
		g_Array[0]=0xFF;
		g_Array[1]=0xFF;
		*Size_Arr=2;
	}
	else
	{
		for(i=High ; i>Low-1 ; i--)
		{
			g_Array[*Size_Arr]=i;
			(*Size_Arr)++;
		}
	}
		return g_Array;
}
*/
/*
//Like Exam Longest_Occurrence
int Longest_Occurrence(int Arr[] , int Size , int Search)
{
	int i,Longest=0;
	int Count=0;
	for(i=0 ; i<Size ; i++)
	{
		if(Arr[i] == Search)
		{
			Count++;
		}
			else
			{
				if(Count > Longest)
				{
			Longest=Count;
		}
				Count=0;
	}
	}
		if(Count > Longest)
						{
					Longest=Count;
				}

	return Longest;
}

*/
/*
 //Longest_Occurrence

int Longest_Occurrence(int Arr[] , int Size , int Search)
{
	int i,Longest=0;
	int Count=0;
	for(i=0 ; i<Size ; i++)
	{
		if(Arr[i] == Search)
		{
			Count++;
		if(Count > Longest)
		{
			Longest=Count;
		}

	}else
	{
		Count=0;
	}

}
	return Longest;
}
*/
/*
 //Longest_Occurrence_With_Out_Search
int Longest_Occurrence_With_Out_Search(int Arr[] , int Size)
{
	int i,Longest=0;
	int Count=1;
	for(i=0 ; i<Size ; i++)
	{
		if(Arr[i] == Arr[i+1])
		{
			Count++;
		if(Count > Longest)
		{
			Longest=Count;
		}

	}else
	{
		Count=1;
	}

}
	return Longest;
}
*/
/*
 //Swap_2_Array
int * Swap(int a_size,int *a,int b_size,int *b)
{
	int i;
	int Temp;
	for(i=0 ; i<b_size ;i++)
	{
		Temp=a[i];
		a[i]=b[i];
		b[i]=Temp;
	}
	return a;
}
*/
/*
 //Prime Num
int Prime_Or_Not(int Num)
{
	int i;
	if(Num == 1)
	{
		Prime;
		return True;
	}
	if(i=2 ; i<10 ; i++)
	{
		if(Num != i)
		{
		if(Num % i == 0)
		{
			return Error;
		}
		}
	}
}
*/
/*
//Reverse string (EXAM)
void reverse_string(char s[])
{
	int i = 0, j;
	char temp;
	j = strlen(s) - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
*/
/*
 *
// Remove All Except Alphabet
void remove_all_except_alphabet(char str[])
{
	int i, j;
	for(i = 0; str[i] != '\0'; ++i)
    {
        while ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) &&  (str[i] != '\0') )
        {

            for(j = i; str[j] != '\0'; ++j)
            {

                str[j] = str[j+1];
            }
        }
    }
}
*/
/*
 // Upper to Lower Only !!!
void upper_to_lower(char s[])
{
	int i=0;
	while(s[i] != '\0')
	{
		if((s[i]>='A') && (s[i]<='Z'))
		{

			s[i] = s[i] + 32;
		}
		i++;
	}
}
*/
/*
 //Bubble Algorithm
int Bubble(int numbers_size, int Arr[])
{
int i,j,Min,Temp;
for( i=0 ; i<Size-1 ; i++)
{
	Temp=0;
	Min=i;
	for( j=i+1 ; j<Size ; j++)
	{
		if(Arr[j]<Arr[Min])
		{
		Temp=Arr[Min];
		Arr[Min]=Arr[j];
		Arr[j]=Temp;
	}
	if(Temp==0)
	{
	break;
	}
}
}
}
*/
/*
 //Sorting Algorithm.
void selection_sorting(int array[],const int size)
{
	int i,j,Min,Temp=0;
	for(i=0 ; i<size-1 ; i++)
	{
		Min=i;
		for(j=i+1 ; j<size ; j++)
		{
		if(array[j] < array[Min])
		{
		Min=j;
		}
		}
		Temp=array[Min];
		array[Min]=array[i];
		array[i]=Temp;
	}
}
*/
/*


/*
/////check saber . during last course
int main (void)
{
	if(!printf("Hello"))
	{
		printf("Hello");
	}else
	{
		printf("World");
	}
	return 0;
}
*/

/*
 *IMP
int Paw(int Num1);
int main (void)
{
int Res;
//int Num1;

//scanf("%d",&Num1);

Res=Paw(64);
printf("%d",Res);
	return 0;
}
int Paw(int Num1)
{

if(Num1 == 0){
	return 0;
}
else if((Num1 == 2))
{
	return 1;
}

	while( Num1%2 == 0)
	{

		if(Num1 ==2){

			return 1;


		}
		Num1/=2;
	}
if(Num1 != 2){
	return 0;
}

}
*/

/*
int main(void)
{
	int Num= 0b01011010010110101010010110101011;
	int Mask=0x80000000;
	int i;
	int res;
	int Count=0;
for(i=0 ; i<32 ; i++)
{
	if((Mask >> i) & Num)
	{
		Count++;
	}

}
printf("%d",Count);
}
*/


/*
int binary(int Num)
{
int Mask=0x80000000;
int i;
int res;
for(i=0;i<32;i++)
{

	res=( Mask & (Num<<i) );
	if(res==0)
	{
		printf("0");
	}
	else
	{
		printf("1");
	}
}
}
int sum_of_ones_zeros(int Num)
{
	int i;
	int Mask=0x80000000;
	int Count1=0,Count0=0;
	for(i=0;i<32;i++)
	{
		((Num<<i)&(Mask)) ? (++Count1):(++Count0);
	}
	printf("\n");
	printf("one's=%d \t zero's=%d",Count1,Count0);
}
*/
/*
 //remove char not alphabet
int Remove(char Char[] , char Char_New[]);

int main(void)
{
	char Char_New[10];
	//char Characters[10]={'@','2','3','2','t','y','e','2','1','\0'};
	char Characters[11];
	int i;

	for(i=0 ; i<9; i++)
	{
	scanf(" %s",&Characters[i]);
	}

//gets(Characters);
	Remove(Characters ,Char_New);
	for(i=0 ; Char_New[i] != '\0' ; i++)
		{
			printf("%c ",Char_New[i]);
		}

return 0;
}
int Remove(char Char[] , char Char_New[])
{
int i,j=0;
for(i=0 ; Char[i] != '\0' ; i++)
{
if(((Char[i] >= 'A') && (Char[i] <= 'Z')) || ((Char[i] >= 'a') && (Char[i] <= 'z')))
{
Char_New[j]=Char[i];
j++;
}
}
Char_New[j]='\0';


return 0;
}
*/
