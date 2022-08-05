#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */
 
int sockMerchant(int n, vector<int> ar) {
    map<int, int> pairs;
    for(int i = 0; i < ar.size(); i++)
        pairs[ar[i]]++;
        
    int pCount = 0;
    for(auto pair : pairs)
        pCount += trunc(pair.second / 2.0);    
    
    return pCount;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string n_temp;
    getline(cin, n_temp);
 
    int n = stoi(ltrim(rtrim(n_temp)));
