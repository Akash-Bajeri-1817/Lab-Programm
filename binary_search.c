#include<stdio.h>
#include<stdlib.h>

void fun_accept_array();
void fun_display_array();
void fun_binary_search();

int array[20], n;

int main(void)
{
	fun_accept_array();
	fun_display_array();
	fun_binary_search();
	return 0;
}

void fun_accept_array()
{
	int i;
	printf("Enter the arrya limit :");
	scanf("%d", &n);

	for ( i = 0; i < n; i++ )
	{
		printf("Enter a number :");
		scanf("%d",&array[i]);
	}
}

void fun_display_array()
{
	int i;
	printf("\nDisplaying the array elements : ");

	for ( i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
}


void fun_binary_search()
{
	int x, start, end, mid;

	printf("\nEnter a number to search :");
	scanf("%d", &x);

	start = 0;
	end = n - 1;
	mid = (start + end)/2;

	while ( x!=array[mid] && start <= end )
	{
		if ( x > array[mid] )
			start = mid +1;
		else 
			end = mid - 1;

		mid = (start + end)/2;
	}

	if ( x == array[mid] )
		printf("\n%d is found at %d in an array\n",x, mid + 1);
	if ( start > end )
		printf("\n%d is not found in an array\n",x);

}


