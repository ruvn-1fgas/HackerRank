#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */
 
int birthday(vector<int> s, int d, int m) {
    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
            sum += s[i + j];
        if(sum == d)
            count++;
    }
    return count;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string n_temp;
    getline(cin, n_temp);
 
    int n = stoi(ltrim(rtrim(n_temp)));
