#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
 
string appendAndDelete(string s, string t, int k) {
    int cl=0;
    while(cl < s.size() && cl < t.size()){
        if(s[cl] != t[cl]) break;
        cl++;
    }
    if(s.size() - cl + t.size() - cl <= k && (s.size() - cl + t.size() - cl) % 2 == k % 2)
        return "Yes";
    else if(s.size() + t.size() <= k)
        return "Yes";
    return "No";
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string s;
    getline(cin, s);
 
    string t;
    getline(cin, t);
 
    string k_temp;
    getline(cin, k_temp);
 
    int k = stoi(ltrim(rtrim(k_temp)));
 
    string result = appendAndDelete(s, t, k);
 
