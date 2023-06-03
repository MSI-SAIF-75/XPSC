#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    string str_N = to_string(N);
    int len = str_N.length();

    if(len<4) str_N = string(4-len,'0')+str_N;

    cout<<str_N<<"\n";
    return 0;
}