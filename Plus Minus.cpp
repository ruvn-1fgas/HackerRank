#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
void plusMinus(vector<int> arr) {
    int c1 = 0, c2 = 0, c3 = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
            c1++; 
        if(arr[i] < 0)
            c2++;
        if(arr[i] == 0)
            c3++;    
    }
        
    cout.precision(6);    
    cout << c1 / static_cast<double>(arr.size()) << '\n' << c2 / static_cast<double>
(arr.size()) << '\n' << c3 / static_cast<double>(arr.size());
}
 
int main()
{
    string n_temp;
    getline(cin, n_temp);
 
    int n = stoi(ltrim(rtrim(n_temp)));
 
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
 
    vector<string> arr_temp = split(rtrim(arr_temp_temp));
 
    vector<int> arr(n);
 
