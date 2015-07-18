#include<iostream>
#include<map>
#include<string>

using namespace std;

bool anagram(string str1, string str2)
{
	std::map<char,int> String1;
	std::map<char,int> String2;

	if(str1.length()!=str2.length())
		return false;

	for(int i=0; i<str1.length();i++)
	{
		String1[str1[i]]++;
	}

	for(int i=0;i<str2.length();i++)
	{	
		String2[str2[i]]++;
	}

	std::map<char,int>:: iterator it2;
	
	for(std::map<char,int>::iterator it1=String1.begin();it1!=String1.end();it1++)
	{
		it2=String2.find(it1->first);
		if(it2!=String2.end())
			{
				if(it1->second!=it2->second)
					return false;
			}
		else
			return false;
			
	}

return true;	

}



int main()
{
	
	string str1;
	string str2;
	cout<<"Enter String1"<<endl;
	cin>>str1;
	cout<<"Enter String2"<<endl;
	cin>>str2;

	if(anagram(str1,str2)==false)
		cout<<"not ana"<<endl;
	else 
	cout<<"anaram"<<endl;

	return 0;

}


