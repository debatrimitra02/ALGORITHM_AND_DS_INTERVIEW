#include<iostream>
#include<list>
using namespace std;
void middle_element(std::list<int> MyList)
{
	//std::list<int> MyList;
	std::list<int>::iterator slow=MyList.begin();
	std::list<int>::iterator fast=MyList.begin();
	while(fast!=MyList.end())
	{
		slow++;
		fast++;
		fast++;
	}

	cout<<"Middle Element"<< (*slow)<<endl;

}

int main()
{
	std::list<int> MyList;
	for(int i=0;i<10;i++)
		MyList.push_back(i);
	middle_element(MyList);
	return 0;
}
