#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,z=0,o=0;
    string s;
    cin>>N;
    cin>>s;
    for( int i=0;i<N;i++)
    {
        if(s[i]=='0')
        {
           z=z+1; 
        }
        else
            o=o+1;
    }
    if(z==o)
    {
         cout<<N;
    }
    else 
    {
         cout<<1;
    }
    
    return 0;
}
