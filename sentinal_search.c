#include<stdio.h>
#include<stdlib.h>

void fun_accept_array();
void fun_display_array();
void fun_sentinel_search();

int array[20], n;

int main(void)
{
	fun_accept_array();
	fun_display_array();
	fun_sentinel_search();
	return 0;
}

void fun_accept_array()
{
	int i;
	printf("Enter the arrya limit :");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf("Enter a number :");
		scanf("%d",&array[i]);
	}
}

void fun_display_array()
{
	int i;
	printf("\nDisplaying the array elements : ");

	for ( i = 0; i < n; i++ )
	{
		printf("%d ", array[i]);
	}
}


void fun_sentinel_search()
{
	int i, num;

	printf("\nEnter a number you want to search :");
	scanf("%d", &num);
        array[n] = num;
	for ( i = 0; array[i] != num; i++ )
		;
	
		if ( i == n )
		{
			printf("\n%d is not found in array\n",num); 
		}
		else
		        printf("\n%d is found at %d\n",num, ++i);
		
}

