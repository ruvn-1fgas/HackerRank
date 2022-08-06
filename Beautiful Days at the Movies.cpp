#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */
 
int beautifulDays(int a, int b, int k) {
    int count = 0;
    for(int i = a; i <= b; i++){
        string num = to_string(i);
        reverse(num.begin(), num.end());
        int j = stoi(num);
        if(abs(i - j) % k == 0)
            count++;
    }
    return count;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
