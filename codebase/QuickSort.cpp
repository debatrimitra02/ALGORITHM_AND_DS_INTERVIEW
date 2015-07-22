#include<iostream>

using namespace std;

void swap(int arr[],int a, int b)
{
	int temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}

int partition(int arr[],int size,int l, int h)
{
	int pivot=arr[h];
	int wall=l-1;

	for(int i=1; i<size-1;i++)
	{
		if(arr[i]<pivot)
		{
			wall=wall+1;
			swap(arr[wall+1],arr[i]);

		}
	swap(arr[wall+1],arr[h]);

	}
	return wall+1;
}

void quicksort(int arr[], int size, int l, int h)
{
	if(l<h)
	{
		int p=partition(arr,size, 1, h);
		quicksort(arr,size, 0, p-1);
		quicksort(arr,size,p+1,h);
	}

}

int main()
{
	int arr[]={1,2,5,7,4,3,9,8};
	int size=sizeof(arr)/sizeof(int);
	quicksort(arr,size,0,size-1);
	for(int i=0; i<size-1; i++)
	{
		cout<<arr[i]<<endl;

	}
	return 0;	
	
}

