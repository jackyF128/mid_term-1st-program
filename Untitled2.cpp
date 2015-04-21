#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int array[], int N);

int main()
{
   int N=8;
   int array[8]={10,13,21,6,9,19,5,8};
   insertion_sort(array,N);
   for(int i=0; i<N;i++)
   printf("insertion_sort=%d\n",array[i]);
   system("pause");
   return 0 ;
}

void insertion_sort(int array[], int N)
{
	 for(int i=2; i<N; ++i)
	 {
	 	 int pivot=array[i];
	 	 int j;
	 	 for(j=i-1; j>=0; --j)
	 	    if (pivot<array[j])
	 	        array[j+1]=array[j];
	 	    else
	 	        break;
	    array[j+1]=pivot;
	 }
}
