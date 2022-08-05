#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */
 
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for(int i = 0; i < ar.size(); i++)
    {
        for(int j = 0; j < ar.size(); j++){
            cout<<ar[i] << ' ' << ar[j] <<'\n';
            if(j < i && (ar[j] + ar[i]) % k == 0)
                count++;
        }
    }
    return count;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
