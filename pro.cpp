#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int MinL(string a[], int n)
{
   int m = INT_MAX;
 for (int i=0; i<=n-1; i++)
        if (a[i].length() < m)
            m = a[i].length();
    return(m);
}
 
bool allContainsPrefix(string arr[], int n, string str,int s, int e)
{
    for (int i=0; i<=n-1; i++)
        for (int j=s; j<=e; j++)
            if (a[i][j] != str[j])
                return (false);
    return (true);
}
string cmp(string a[], int n)
{
    int index = MinL(a, n);
    string prefix;
    int l = 0, h = index;
 
    while (l <= h)
    {
        int m = l + (h - l) / 2;
 
        if (allContainsPrefix (a, n, a[0], l, m))
        {
            prefix = prefix + a[0].substr(l, m-l+1);
            l = m + 1;
        }
 
        else 
            h = m - 1;
    }
 
    return (prefix);
}
int main()
{
    string a[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};
    int n = sizeof (a) / sizeof (a[0]);
 
    string ans = commonPrefix(a, n);
 
    if (ans.length())
        cout << "The longest common prefix is "
             << ans;
    else
        cout << "There is no common prefix";
    return (0);
}
