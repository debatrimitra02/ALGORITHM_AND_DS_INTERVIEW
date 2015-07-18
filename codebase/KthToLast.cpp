#include<iostream>
#include<list>

using namespace std;

void kthtolastelement(std::list<int> MyList,int k)
{
	std::list<int>::iterator slow=MyList.begin();
	std::list<int>::iterator fast=MyList.begin();
	
	for(int i=0; i<k;i++)
	{
		fast++;
	}

//	fast+=k;

	while(fast!=MyList.end())
	{
		slow++;
		fast++;
	}
	cout<<"Kth to Last Element"<<"::=="<<(*slow)<<endl;
}


int main()
{
	std::list<int>MyList;
	for(int i=0;i<10;i++)
	{
		MyList.push_back(i);
	}

	kthtolastelement(MyList,3);
	return 0;
}
