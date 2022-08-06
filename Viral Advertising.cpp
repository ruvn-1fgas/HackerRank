#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
 
/*
 * Complete the 'viralAdvertising' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */
 
int viralAdvertising(int n) {
    int shared = 5, liked = 0, cum = 0;
    for(int i = 0;  i < n; i++){
        liked = floor(shared / 2.0);
        shared = liked * 3;
        cum += liked;
        }
    return cum;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string n_temp;
    getline(cin, n_temp);
 
    int n = stoi(ltrim(rtrim(n_temp)));
 
    int result = viralAdvertising(n);
 
    fout << result << "\n";
 
