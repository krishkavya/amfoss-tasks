#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){   
        int sum=0;
        cin >> n;
        for(int i=3;i<n;++i){
            if(i%3==0||i%5==0)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
