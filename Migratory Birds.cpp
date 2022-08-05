#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
 
int migratoryBirds(vector<int> arr) {
    map<int, int> m;
    for(int i = 0; i < arr.size(); i++)
        m[arr[i]]++;
        
    int max = 0, maxP = 0;
    
    for(auto bird : m){
        if(bird.second > max)
        {
            max = bird.second;
            maxP = bird.first;
        }
    }    
    return maxP;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string arr_count_temp;
    getline(cin, arr_count_temp);
 
