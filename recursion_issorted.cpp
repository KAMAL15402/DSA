#include<bits/stdc++.h>
using namespace std;

bool issorted(vector <int>& v,int &i,int &n){
    if(i==n){
        return true;
    }
    
    if(v[i]<v[i-1]){
        return false;
    }
        
    
    return issorted(v,++i,n);;
}

int main(){
    vector <int> v{1};
    int i=1,n= v.size();
    if(issorted(v,i,n))
    cout<<"TRUE";
    else
    cout<<"FALSE";
    return 0 ;
}
