#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter the number of row"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+i;j++)
		{
			if (j<n-i-1)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<"\n";
	}
	
}
