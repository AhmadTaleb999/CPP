#include <iostream>
using namespace std;
int fib(int);
int main(){
	
	int n,i;
	cout<<"how many numbers do you need to display"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
	cout<<fib(i)<<"\t\t";
	}
	
}
int fib(int n){
	if(n<=1)
	return n;
	else
	return (fib(n-1)+fib(n-2));
	
}
