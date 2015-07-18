#include<iostream>

using namespace std;

void swap(int array[],int i,int j)
{
	int temp=array[i];
	array[i]=array[j];
	array[j]=temp;
}

int find_second_smallest(int in[],int out[],int size)
{

// since we are looking for second smallest we would keep the out sorted in ascending
// so out[0] is the smallest out[1] is the second smallest

	out[0]=in[0];
	out[1]=in[1];
	
	if(out[0]>out[1])
		swap(out,0,1);

	int j=2;

	while(j<size-1)
	{
		if(in[j]<out[1])
			out[1]=in[j];
		if(out[0]>out[1])
			swap(out,0,1);
		j++;
	}
	
	return out[1];
}



int main()
{
	int input[]={1,5,6,3,7};
	int out[2];
	int size=sizeof(input)/sizeof(input[0]);

	cout<<find_second_smallest(input,out,size)<<endl;
	
	return 0;

}
