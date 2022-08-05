#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */
 
vector<int> breakingRecords(vector<int> scores) {
    int maxScore = scores[0];
    int minScore = scores[0];
    int c1 = 0, c2 = 0;;
    
    for(int i = 1; i < scores.size(); i++)
    {
        if(scores[i] > maxScore){
            maxScore = scores[i];
            c1++;
        }
        if(scores[i] < minScore)
        {
            minScore = scores[i];
            c2++;
        }
    }
    return {c1, c2};
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
