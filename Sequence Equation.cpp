#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */
 
vector<int> permutationEquation(vector<int> p) {
    vector<int> res;
    
    for(int i = 1; i <= p.size(); i++){
        int pos = 0;
        for(int j = 0; j < p.size(); j++)
            if(i == p[j]){
                pos = j+1;
                break;
            }
        for(int j = 0; j < p.size(); j++)
            if(pos == p[j]){
                pos = j+1;
                break;
            }
         res.push_back(pos);
    }
    return res;
}
 
int main()
{
