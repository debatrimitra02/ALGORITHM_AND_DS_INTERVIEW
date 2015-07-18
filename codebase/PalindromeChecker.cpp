#include<iostream>
#include<string>

using namespace std;

bool palindromechecker(string str)
{
	int n=str.length();
	
	cout<<"size"<<n<<endl;

	for(int i=0; i<n/2; i++)
	{
		cout<<i<<endl;
		cout<<str[i]<<endl;
		if(str[i]!=str[n-1-i])
			return false;	
	}

	return true;
}


int main()
{
	string str;
	cout<<"Enter a String"<<endl;
	cin>>str;

	if(palindromechecker(str)==false)
		cout<<"Not Palindrome"<<endl;
	else
		cout<<"Palindrome"<<endl;

return 0;
}
