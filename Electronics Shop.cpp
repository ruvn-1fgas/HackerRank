#include <bits/stdc++.h>
 
using namespace std;
 
vector<string> split_string(string);
 
/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(), keyboards.end()); reverse(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end()); reverse(drives.begin(), drives.end());
    
    int maxSum = 0;
    for(int i = 0; i < keyboards.size(); i++){
        int kBoard = keyboards[i];
        for(int j = 0; j < drives.size(); j++){
            if(keyboards[i] + drives[j] > b)
                continue;
                else{
                    if(keyboards[i] + drives[j] > maxSum)
                        maxSum = keyboards[i] + drives[j];     
                }
        }
    }
 
    return maxSum ? maxSum : -1;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string bnm_temp;
    getline(cin, bnm_temp);
 
    vector<string> bnm = split_string(bnm_temp);
