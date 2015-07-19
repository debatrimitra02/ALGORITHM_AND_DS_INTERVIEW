#include<iostream>

using namespace std;

void swap(int arr[],int x, int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
          swap(arr,j+1,j);
          j = j-1;
       }
   }
}

void print_array(int arr[],int size)
{
	for (int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}
int main()
{
	int arr[]={9,7,6,5};
	int size=sizeof(arr)/sizeof(int);
	insertionSort(arr,size);
	print_array(arr,size);

return 0;

}
