#include<bits/stdc++.h>
using namespace std;
int Search(int[],int,int);

int main() {
    int N,M,t,n;
    cin>>N>>M;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    int flag=0;
    for(int i=0;i<N;i++){    
        t = M-A[i];
        n= Search(A,N,t); 
    
        if(n==0) {
          flag=1;
          break;
        } else {
            flag=0;
        } 
    }
    if(flag==1) {
        cout<<"True";
    } else
        cout<<"False";
    return 0;
}
int Search(int A[ ],int size,int item)
{
    for(int j=0;j<size;j++)
    {
        if(A[j]==item)
            return 0;
    }
    return -1;
}
