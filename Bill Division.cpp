#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */
 
void bonAppetit(vector<int> bill, int k, int b) {
    int mA = 0, mB = bill[k];
    
    int sum = 0;
    for(int i = 0; i < bill.size(); i++)
        if(i != k)
            sum += bill[i];
    if(abs((sum/2) - b) == 0)
        {
            cout << "Bon Appetit";
            return;
        }
    cout << abs((sum/2) - b);
}
 
int main()
{
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
 
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
 
