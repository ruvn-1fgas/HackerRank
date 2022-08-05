#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */
 
string kangaroo(int x1, int v1, int x2, int v2) {
    
    for(;;){
    if(x1 == x2)
        return "YES";
    if ((v1 > v2 && x1 > x2) || (v2 > v1 && x2 > x1) || (v2 == v1 && x2 != x1))
        return "NO";    
        x1 += v1;
        x2 += v2;
    }
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
