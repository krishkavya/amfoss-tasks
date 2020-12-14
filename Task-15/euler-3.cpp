#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int t,i;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n;
        cin >> n;
        while(n%2==0){
            n=n/2;
            if(n==1){
                cout<<2<<endl;
            }
        }
       for(int i=3;i<sqrt(n);i=i+2){
           while(n%i==0)
           n=n/i;
       }
       if(n>2){
           cout<<n<<endl;
       }else
       cout<<i<<endl;
    }
    return 0;
}
