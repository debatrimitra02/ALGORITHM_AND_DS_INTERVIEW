//Given an array and a number X find all pairs of elements in the array whose sum is X

#include<utility>
#include<iostream>
#include<map>
#include<vector>
#include<array>

using namespace std;

void checksum(int arr[],int X,int size)
{
//	int size=sizeof(arr)/sizeof(int);
	std::pair<int,int> mypair;
	std::vector< pair<int,int> >list_of_pairs;

	std::map<int,int> MyMap;
	for(int i=0;i<size;i++)
	{
		MyMap[arr[i]]++;
	}

	std::map<int,int>::iterator it0;

	std::map<int,int>::iterator it=MyMap.begin();
	while(it!=MyMap.end())
	{
		int temp=X-it->first;
		it0=MyMap.find(temp);
		if(it0!=MyMap.end())
		{
			mypair=std::make_pair(it->first,temp);
			list_of_pairs.push_back(mypair);
		}
	it++;	
	}
	
	for(std::vector< pair<int,int> >::iterator it2=list_of_pairs.begin();it2!=list_of_pairs.end();it2++)
	{
		cout<<"PAIRS"<<endl;
		cout<<it2->first<<"=>"<<it2->second<<endl;
		
	}

}



int main()
{
	
	int arr[]={1,2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);

	checksum(arr,5,size);
	return 0;
}
