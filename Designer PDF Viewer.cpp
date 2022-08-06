#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
int designerPdfViewer(vector<int> h, string word) {
    int max = 0;
    for(int i = 0; i < word.size(); i++)
        if(h[word[i] - 97] > max)
            max = h[word[i] - 97];
 
    return max * word.size();
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string h_temp_temp;
    getline(cin, h_temp_temp);
 
    vector<string> h_temp = split(rtrim(h_temp_temp));
 
    vector<int> h(26);
 
    for (int i = 0; i < 26; i++) {
        int h_item = stoi(h_temp[i]);
 
        h[i] = h_item;
    }
 
    string word;
    getline(cin, word);
 
