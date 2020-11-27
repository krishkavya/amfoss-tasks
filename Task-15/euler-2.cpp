#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s;
    long  N;
     cin >> t;
     long A[100];
     A[0]=1;
     A[1]=2;
     for(int i=2;i<100;i++){
         A[i]=A[i-1]+A[i-2];
     }
    for(int a0 = 0; a0 < t; a0++)
    {   s=0;  
        cin>>N;
        for(int i=1;i<100;i++){
          if(A[i]%2==0 && A[i]<N)
          {
              s+=A[i];
          }else if(A[i]>N){
              break;
          }
      }
        cout<<s<<endl;
    }
   return 0;
}
