 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
 
/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */
 
int utopianTree(int n) {
    int size = 1;
    for(int i = 1; i <= n; i++)
        if(i % 2 == 1)
            size *= 2;
        else if(i % 2 == 0) 
            size += 1;
    return size;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string t_temp;
    getline(cin, t_temp);
 
    int t = stoi(ltrim(rtrim(t_temp)));
 
    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);
 
        int n = stoi(ltrim(rtrim(n_temp)));
