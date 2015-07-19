#include<iostream>
#include<string>


using namespace std;

void String_Compression(string s1, string s2,int size)
{
	int counter=0;
	int j=0;
	char temp;

	for(int i=0; i<size-1;i++)
	{
		if(s1[i]!=temp)
		{
			cout<<"HERE"<<endl;
			s2[j]=s1[i];			
			s2[j-1]=counter;

			counter=1;
			temp=s1[i];

			s2[j+1]=counter;
			j=j+2;
		}

		else
		{
			counter++;
				
		}
	}
	
	cout<<s2<<endl;
}



int main()
{
	string s1="ab";
	
	string s2;
	
//	int size=sizeof(s1[0]);
	
	cout<<s1.length()<<endl;	
	String_Compression(s1,s2,s1.length());	

	return 0;
}
