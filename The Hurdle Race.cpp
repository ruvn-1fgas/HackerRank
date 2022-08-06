#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
int hurdleRace(int k, vector<int> height) {
   int max = *max_element(height.begin(), height.end());
   return max - k <= 0 ? 0 : max - k;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
 
    int n = stoi(first_multiple_input[0]);
 
    int k = stoi(first_multiple_input[1]);
 
    string height_temp_temp;
    getline(cin, height_temp_temp);
 
    vector<string> height_temp = split(rtrim(height_temp_temp));
 
    vector<int> height(n);
 
    for (int i = 0; i < n; i++) {
        int height_item = stoi(height_temp[i]);
 
        height[i] = height_item;
