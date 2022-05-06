#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t;
    getline(cin,s);
    getline(cin,t);

    int i,flag=0;
    int j = s.size();
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=t[j-1]){flag=1;}
        j--;
    }

    if(flag==0){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}



return 0;
}

