#include<bits/stdc++.h>
using namespace std;


int main(){
    unsigned int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n;
        cin >> n;
        unsigned long long sum=0;
        unsigned long long a=1;
        unsigned long long b=2;
        while(b<=n){
            if(b%2==0){
                sum=sum+b;
            }
            auto next=a+b;
            a=b;
            b=next;
        }
        cout<<sum<<endl;
    }
    return 0;
}
