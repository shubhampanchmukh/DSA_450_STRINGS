#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int isPalindrome(char S[])
{
  int n = strlen(S);
  int l = 0;
  int r = n - 1;
  for (int i = 0; i < n / 2; i++)
  {
    if (S[i] != S[n - i - 1])
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char s[100000];
    scanf("%s", s);

    printf("%d\n", isPalindrome(s));
  }

  return 0;
} // } Driver Code Ends