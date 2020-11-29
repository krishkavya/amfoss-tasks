#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    
int main() 
{
    int n,s,a,b;
    vector<int> ar;
    cin>>n;
     while(n--)
    { 
        cin>>a;
        cin>>b;
        s=b/a;
        ar.push_back(s);
    }
    for(auto i = ar.begin();i!=ar.end();i++)
        cout<<*i<<" ";

     return 0;
}
