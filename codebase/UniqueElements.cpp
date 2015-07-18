#include<iostream>
#include<map>
#include<string>

using namespace std;

bool unique_elements(string str)
{
	std::map<char,int> MyMap;

	for(int i=0;i<str.length();i++)
	{
		MyMap[str[i]]++;
	}

for(std::map<char,int>:: iterator it=MyMap.begin();it!=MyMap.end();it++)
{
	if(it->second>1)
		return false;
}
return true;

}

int main()
{
	string str;
	cout<<"Input your string"<<endl;
	cin>>str;
	if(unique_elements(str)==true)
		cout<<"All Unique"<<endl;
	else
		cout<<"Not unique"<<endl;

	
	return 0;
}

