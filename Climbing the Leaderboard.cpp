#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    int h_rank = 1;
    for(int i=scores.size()-1;i>0;i--){
        if(scores[i]<scores[i-1]){
            h_rank++;
        }
    }
    h_rank++;
    vector<int>ranks(alice.size());
    int j = scores.size()-1;
    for(int i=0;i<alice.size();i++){
        while(alice[i]>=scores[j] ){
            if(h_rank==1){
                break;
            }
            if(scores[j]==scores[j-1]){
                j--;
            }
            else{
                j--;
                h_rank--;
            }
        }
        ranks[i] = h_rank;
    }
    return ranks;
}   
 
int main()
