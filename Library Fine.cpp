#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine = 0;
 
    if (y1 == y2){ 
        if (m1 > m2){ 
            fine = (m1 - m2) * 500;
        }
        else if (d1 > d2 && m1 == m2){
            fine = (d1 - d2) * 15;
        }
    }
     else if (y1 > y2) 
        fine = 10000;
    
    return fine;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
 
    int d1 = stoi(first_multiple_input[0]);
 
    int m1 = stoi(first_multiple_input[1]);
