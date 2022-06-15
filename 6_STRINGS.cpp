#include<bits/stdc++.h>
using namespace std;

bool isShuffledSubstring(string s1,string s2)
{
         int n = s1.length();
         int m = s2.length();
        if(n<m){        
        // Sort string s1
        sort(s1.begin(), s1.end());
 
        // Traverse string s2
        for (int i = 0; i < m; i++) {
 
            // Return false if (i+n-1 >= m)
            // doesn't satisfy
            if (i + n - 1 >= m)
                return false;
 
            // Initialise the new string
            string str = "";
 
            // Copy the characters of
            // string s2 in str till
            // length 
            for (int j = 0; j < n; j++)
                str.push_back(s2[i + j]);
 
            // Sort the string str
            sort(str.begin(), str.end());
 
            // Return true if sorted
            // string of "str" & sorted
            // string of "s1" are equal
            if (str == s1)
                return true;

        }
    }
    else if(s1.length()>s2.length()){

     return 0;  
    }
}

int main()
{
    // string s1="onetwofour";
    // string s2="hellofourtwooneworld";
    string s1 = "geekforgeeks";
    string s2 = "ekegorfkeegsgeek";
    cout<<isShuffledSubstring(s1,s2);
return 0;
}