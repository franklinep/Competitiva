#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int n;
	string str1;
	cout<<"Write a word: ";
	getline(cin,str1,'\n');
	n=str1.length();
	
	if(n>10 && n<=100)
	{
		cout<<str1[0]<<n-2<<str1[n-1]<<endl;
	}
	
	if(n>0 && n<=10)
	{
		cout<<str1;
	}

	
}
