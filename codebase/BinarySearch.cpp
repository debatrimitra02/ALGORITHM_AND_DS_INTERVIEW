///////////Recursively///////

#include<iostream>

using namespace std;

int binary_search(int arr[],int  low,int  high,int  target)
{
	int mid=(low+high)/2;

	if(target==arr[mid])
		return mid;

	if(target < arr[mid])
		return binary_search(arr,low,mid-1, target);
	if(target > arr[mid])
		return binary_search(arr,mid+1,high,target);


return -1;
}

int main()
{
	int arr[]={1,2,5,7,9,13,15,16,17,29};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int result=binary_search(arr,0,size-1,13);

	if (result==-1)
		cout<<"NOT FOUND"<<endl;
	else
		cout<<result<<endl;
	return 0;
}
