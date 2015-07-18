#include<iostream>
#include<map>
#include<utility>
#include<vector>
#include<array>


using namespace std;

void checksum(int arr[], int target, int size)
{
	
	std::map<int,int> MyMap;
	std::pair<int,int> Mypair;
	std::<vector<pair<int,int> MyList;

	for(int i=0; i<size; i++)
	{
		MyMap[arr[i]]++;

	}

	std::map<int,int>::iterator it0=MyMap.begin();
	

	for(std::map<int,int>::iterator it1=MyMap.begin();it1!=MyMap.end();it1++)
	{

		int temp=target-it1->first;
		it0=MyMap.find(temp);
		if(it0!=MyMap.end())
		Mypair=std::make_pair(it1->first,temp);
		MyList.push_back(Mypair);
		

	}

	for(std::vector<pair<int,int>::iterator it2=MyList.begin(); it2!=MyList.end();it2++)
	{
		cout<<"The Pairs"<<endl;
		cout<<it2->first<<","<<it2->second<<endl;


	}
}

int main()
{

	int arr[]={1,2,3,4,5};
	int target=7;
	int size=sizeof(arr)/sizeof(arr[0]);
	checksum(arr,7);
return 0;

}
