#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter the number of row"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=n;j>=0;j--)
		{
			if (i>j)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\n";
	}
	
}
