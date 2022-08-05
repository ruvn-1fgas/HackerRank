#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */
 
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> 
oranges) {
    int c1 = 0, c2 = 0;
    
    for(int i = 0; i < apples.size(); i++)
    {
        if(apples[i] > 0)
        {
            int dist = apples[i];
            if(a + dist >= s && a + dist <= t)
                c1++;
        }
    }
    
    for(int i = 0; i < oranges.size(); i++)
    {
        if(oranges[i] < 0)
        {
            int dist = oranges[i];
