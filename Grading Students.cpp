#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
 
/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */
 
vector<int> gradingStudents(vector<int> a) {
    for(int i = 0; i < a.size(); i++){
        if(a[i] < 38)
            continue;
        int steps = 0;
        int grade = a[i];
        
        while(grade % 5 != 0)
                grade++;
        if(grade - a[i] < 3)
            a[i] = grade;
    }
 
    return a;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string grades_count_temp;
    getline(cin, grades_count_temp);
 
    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));
 
