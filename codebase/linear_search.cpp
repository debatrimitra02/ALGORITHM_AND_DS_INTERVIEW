#include<iostream>

using namespace std;

int linear_search(int arr[],int target, int size)
{
	for(int i=0;i<size;i++)
	{
		if(target==arr[i])
		return i;

	}
return -1;

}

int main()
{
	int arr[]={1,2,5,7,9,12,15,34,67,89};
	int size=sizeof(arr)/sizeof(arr[0]);
	int result=linear_search(arr, 15, size);
	if(result==-1)
	cout<<"NOT FOUND"<<endl;
	else
	cout<<result<<endl;
	return 0;
}
