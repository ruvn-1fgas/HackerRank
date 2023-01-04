#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
 
/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */
 
int findDigits(int n) {
    
    int count = 0;
    std::string num = to_string(n);
 
    for(char c : num)
        if (c != '0' && n % (c - '0') == 0)
            count++;
 
    return count;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string t_temp;
    getline(cin, t_temp);
 
    int t = stoi(ltrim(rtrim(t_temp)));
 
    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
