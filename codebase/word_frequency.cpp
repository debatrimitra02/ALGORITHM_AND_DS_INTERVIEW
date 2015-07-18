#include <iostream>
#include<map>
#include<string>
#include<fstream>

using namespace std;


std::map<string,int> count_freq(string filename)
{
	ifstream fin;
	fin.open(filename);

	string s;
	char* token;	

	std::map<string,int> MyMap;
	while(fin>>s)
	{
		char *fileName = (char*)s.c_str();
		token = strtok (fileName," ,@#$^&&* ");
		while(token!=NULL)
		{
			MyMap[token]++;
			cout<<token<<endl;		
		}		
	}

	fin.close();

return MyMap;
}

void print(std::map<string,int> MyMap)
{
	for(std::map<string,int> ::iterator it=MyMap.begin();it!=MyMap.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
	
}

int main()
{
	std::map<string,int> MyMap;

	MyMap = count_freq("test.text");
//	print(MyMap);	

	return 0;
}
