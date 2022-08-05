#include <bits/stdc++.h>
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
int birthdayCakeCandles(vector<int> candles) {
    int max = 0;
    for(int i = 0; i < candles.size(); i++)
        if(candles[i] > max)
            max = candles[i];
    int count = 0;
    for(int i = 0; i < candles.size(); i++)
        if(candles[i] == max)
            count ++;
            
    return count;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string candles_count_temp;
    getline(cin, candles_count_temp);
 
    int candles_count = stoi(ltrim(rtrim(candles_count_temp)));
 
    string candles_temp_temp;
    getline(cin, candles_temp_temp);
 
    vector<string> candles_temp = split(rtrim(candles_temp_temp));
 
    vector<int> candles(candles_count);
 
    for (int i = 0; i < candles_count; i++) {
        int candles_item = stoi(candles_temp[i]);
 
