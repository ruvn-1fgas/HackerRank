#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
 
int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    for(int i = a[a.size() - 1]; i <= b[0]; i++){
        bool f = true;
        for(int j = 0; j < a.size(); j++)
            if(i % a[j] != 0){
                f = false;
                break;
            }
        if(f)
            for(int j = 0; j < b.size(); j++)
                if(b[j] % i != 0){
                    f = false;
                    break;
                }    
        if(f)
            count++;
    }   
    return count;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
 
