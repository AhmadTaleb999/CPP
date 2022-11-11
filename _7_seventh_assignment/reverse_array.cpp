#include <iostream>
using namespace std;
void arr_reverse(int x[],int size);
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
     cout<<"_____________\n";
	arr_reverse(arr,size);
    return 0;
    }
 void arr_reverse(int x[],int size)
    {
    	int temp;
    
			
			
	            for(int i=0;i<size;i++)
	            {		
		              for(int j=i+1;j<size;j++)
		             {
			           
			             	temp  =x[i];
			            	x[i]=x[j];
				             x[j]=temp;
			            
		             }
	            }       
	    

    for(int i=0 ;i<size;i++)
    cout<<x[i]<<"\t";
}



