#include <iostream>
#include <map>
#include <string>

using namespace std;


void printMap(std::map<string,int> Map)
{
	std::map<string,int> ::iterator it=Map.begin();
	while(it!=Map.end())
	{
		cout<<it->first<<" " <<it->second<<endl;
		it++;
	}
}
int main()
{
	std::map<string,int> MyMap;	
	string fruit[] = {"Apple", "Orange", "Banana"};
//	cout << fruit.length() << endl;


	for(int i=0; i<=2; i++)
	{
		MyMap.insert(std::pair<string,int>(fruit[i],i));
		//MyMap[fruit[i]]="i";
	}
	printMap(MyMap);
	
	return 0;
}

