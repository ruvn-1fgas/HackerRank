#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */
 
string angryProfessor(int k, vector<int> a) {
    int count = 0;
    for(int n : a)
        if(n <= 0)
            count++;
    return count >= k ? "NO" : "YES";
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string t_temp;
    getline(cin, t_temp);
 
    int t = stoi(ltrim(rtrim(t_temp)));
 
    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);
