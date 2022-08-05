#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */
 
long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(int i = 0; i < ar.size(); i++)
        sum += ar[i];
    return sum;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string ar_count_temp;
    getline(cin, ar_count_temp);
 
    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));
 
    string ar_temp_temp;
    getline(cin, ar_temp_temp);
 
    vector<string> ar_temp = split(rtrim(ar_temp_temp));
 
    vector<long> ar(ar_count);
 
    for (int i = 0; i < ar_count; i++) {
