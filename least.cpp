#include<iostream>
using namespace std;
void LowestNr(string str, int n, string &res)
{
    if (n == 0)
    {
        res.append(str);
        return;
    }
    int len = str.length();
    if (len <= n)
        return;
    int minIndex = 0;
    for (int i = 1; i<=n ; i++)
        if (str[i] < str[minIndex])
            minIndex = i;
    res.push_back(str[minIndex]);
    string new_str = str.substr(minIndex+1, len-minIndex);
    LowestNr(new_str, n-minIndex, res);
}
string buildLowestNumber(string str, int n)
{
    string res = "";
    LowestNr(str, n, res);
    return res;
}
int main()
{
    string s = "121198";
    int i = 2;
    cout <<LowestN(s, i);
    return 0;
}
