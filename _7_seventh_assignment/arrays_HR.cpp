#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,i;
    cin>>N;
    
        int A[N]={0};
        for(i=0;i<=N;i++){
            cin>>A[i];
        }
        for(i=N-1;i>=0;i--){
            cout<<A[i]<<" ";
        }
        
      
    return 0;
}
