#include <bits/stdc++.h>
 
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
 
/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */
 
string dayOfProgrammer(int year) {
    if(year < 1918){
        if(year % 4 == 0) 
            return "12.09." + to_string(year);
        return "13.09." + to_string(year);
    }
    else if(year == 1918){
            return "26.09." + to_string(year);
    }
    else{
        if(year % 400 == 0){
           return "12.09." + to_string(year);
        }
        else if(year % 4 == 0 && year % 100 != 0){
           return "12.09." + to_string(year);
        }
        else return "13.09." + to_string(year);
    }
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string year_temp;
    getline(cin, year_temp);
