#include<bits/stdc++.h>
using namespace std;

 void reverseString(vector<char>& s) 
    {
       int left=0;
       int rght=s.size()-1;
       while(left<rght){
           char temp=s[left];
           s[left]=s[rght];
           s[rght]=temp;
           left++;
           rght--;
       }

       for (int i = 0; i <s.size(); i++)
       {
           cout<<s[i];
       }
       
        
    }


int main(){
    string str="HELLO";
    // reverse(s.begin(),s.end());
    // cout<<s;
    vector<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push_back(str[i]);
    }
    reverseString(s);
    
return 0;
}