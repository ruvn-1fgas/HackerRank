#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
     
void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long max = 0, min = 0;
    for (int i = 0; i < 4; i++) {
        min += arr[i];
        if (max + arr[i + 1] > 0)
        max += arr[i + 1];
    }
    cout << min << ' ' << max;
}
 
int main()
{
 
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
 
    vector<string> arr_temp = split(rtrim(arr_temp_temp));
 
    vector<int> arr(5);
 
    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);
 
        arr[i] = arr_item;
    }
 
    miniMaxSum(arr);
                                
    return 0;
