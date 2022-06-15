#include <bits/stdc++.h>
using namespace std;

void printString(string S, int start, int end)
    {
        for (int i = start; i <= end; i++)
        {
            cout<<S[i];
        }
        
    }


    
    string longestPalin(string S)
    {
        int l,h;
        int start=0,end=1;
        for (int  i = 1; i <S.length(); i++)
        {
            //for even substring

            l=i-1;
            h=i;

            while(l>=0 && h<S.length() && S[l]==S[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            // for odd substring
            l=i-1;
            h=i+1;

            while (l>=0 && h<S.length() && S[l]==S[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            
            
        }
        printString(S,start,start+end-1);
        
    }


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        longestPalin(S);
         
    }
}
