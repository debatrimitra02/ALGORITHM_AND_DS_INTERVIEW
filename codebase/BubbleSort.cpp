#include<iostream>
#include<array>
using namespace std;


void bubblesort(int arr[],int size)
{
//	int length=sizeof(arr)/sizeof(int);
	cout<<"size of array"<<size<<endl;
	int temp;

	cout<<"Print initial array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}	
	
	for(int j=0;j<size;j++)
	{
	   for(int i=j+1;i<size-1;i++)
	   {
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
		}
	    }
	}

	cout<<"SORTED array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}

}


int main()
{
	//cout<<"Enter the array you want to sort"<<endl;
     	
	int arr[]={1,2,3,5,7,6,4};
	int size=sizeof(arr)/sizeof(int);
	bubblesort(arr,size);
	return 0;
}



