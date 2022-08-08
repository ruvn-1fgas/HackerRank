#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'saveThePrisoner' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. INTEGER s
 */
 
int saveThePrisoner(int n, int m, int s) {
    return 1 + (s - 1 + m - 1) % n;
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
 
        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
 
        int n = stoi(first_multiple_input[0]);
