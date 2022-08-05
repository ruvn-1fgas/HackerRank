#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
 
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int p1 = 0, p2 = 0;
    for(int i = 0; i < a.size(); i++)
        if(a[i] > b[i])
            p1++;
        else if(a[i] < b[i])
            p2++;
    return {p1, p2};
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string a_temp_temp;
    getline(cin, a_temp_temp);
 
    vector<string> a_temp = split(rtrim(a_temp_temp));
 
    vector<int> a(3);
 
    for (int i = 0; i < 3; i++) {
