#include<iostream>

using namespace std;

void swap(int arr[],int x, int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}


void InsertionSort(int arr[], int size)
{
	cout<<"Size of array"<<size<<endl;

	int current;

	for(int i=0;i<size;i++)
	{
		current=arr[i];
		curr_ix=i;

		int j=i;
		while(j!=0)
		{
			if(current>=arr[j-1])
				break;
			else
				swap(arr,curr_ix,j-1);
			curr_ix=j-1;
		}
	
	}


	
	
}

int main()
{
	int arr[]={1,5,4};
	int size=sizeof(arr)/sizeof(int);
	InsertionSort(arr,size);

//	swap(arr,0,1);

	for(int i=0;i<size;i++)
	{		cout<<arr[i]<<endl;
		
	}

}
