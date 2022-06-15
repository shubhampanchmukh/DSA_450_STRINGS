#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1,string s2){
    string temp=s1 +s1;
    for (int i = 1; i < temp.length(); i++)
    {
        if(temp.substr(i,4)==s2){
            return 1;
        }
        
    }
    return 0;
    
}

int main(){

    string s1="ABCD";
    string s2="CDAB";

    cout<<areRotations(s1,s2);

return 0;
}