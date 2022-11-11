#include <iostream>
using namespace std;
void arr_arang(int x[],int size);
 int main()
    {
        int size;
    	cout<<"How many numbers you want to enter in the array\n";
    	cin>>size;
        int arr[size];
     
     cout<<"please enter the numbers\n";
     for(int i=0 ;i<size;i++)
     {
        cin>>arr[i];
     }
	arr_arang(arr,size);
    return 0;
    }
 void arr_arang(int x[],int size)
    {
        char type;
        int temp;
    cout<<"if you want to sort it in ascending way (enter a) or descending(enter d)\n";
			cin>>type;
			if(type=='a')
			{
	            for(int i=0;i<size;i++)
	            {		
		              for(int j=i+1;j<size;j++)
		             {
			           if(x[i]>x[j])
			             {
			             	temp  =x[i];
			            	x[i]=x[j];
				             x[j]=temp;
			             }
		             }
	            }       
	        }
	else if(type=='d')
	{
			for(int i=0;i<size;i++)
	{		
		for(int j=i+1;j<size;j++)
		{
			if(x[i]<x[j])
			{
				temp  =x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	}
    for(int i=0 ;i<size;i++)
    cout<<x[i]<<endl;
    }



