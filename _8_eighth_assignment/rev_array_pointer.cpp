#include <iostream>
using namespace std;
int revmat(int *arr,int n)
{ 	
	int temp;
	for(int i=0 ;i<n/2;i++)
    	{
	        temp=arr[i];
	        arr[i]=arr[n-1-i];
	        arr[n-1-i]=temp;
	    }
    cout<<"the matrix after revers is ";
    for(int x=0 ;x<n;x++)
		cout<<*(arr+x)<<"\t";
    return 0;
}
int main()
{
	int arr[1000]={0};
    int x[1000]={0};
    int n;
    cout<<"Enter the number of your matrix "<<endl;
    cin>>n;
    for(int i =0 ; i<n ; i++)   
		cin>>x[i];
    revmat(&x[0],n);
	return 0;
}
