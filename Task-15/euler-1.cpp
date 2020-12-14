#include<bits/stdc++.h>
using namespace std;

long Sum(long x){
    return x* (x+1) / 2;
}
int main(){
    int t,sum;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        n--;
        cout<<(3 * Sum(n/3)) + (5 * Sum(n/5)) - (15 * Sum(n/15))<<endl;
    }
    return 0;
}
