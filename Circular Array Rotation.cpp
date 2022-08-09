#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'circularArrayRotation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 */
 
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {    
    vector<int> res;
    for(auto num : queries){
        int pos=num-k;
        while (pos<0)
            pos+=a.size();                
        res.push_back(a[pos]);
    }
    return res;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
 
