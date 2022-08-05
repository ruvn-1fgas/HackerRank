 * The function accepts INTEGER_ARRAY a as parameter.
 */
 
int pickingNumbers(vector<int> a) {
    vector<int> sizes;
    for(int i = 0; i < a.size(); i++){
        vector<int> temp;
        for(int j = 0; j < a.size(); j++){
            if(a[j] == a[i] || a[i] == a[j] + 1)
                temp.push_back(a[j]);
        }
        sizes.push_back(temp.size());
    }
    
    int maxSize = 0;
    for(auto size : sizes)
        if(size > maxSize)
            maxSize = size;
    
    return maxSize;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string n_temp;
    getline(cin, n_temp);
 
    int n = stoi(ltrim(rtrim(n_temp)));
 
    string a_temp_temp;
    getline(cin, a_temp_temp);
 
    vector<string> a_temp = split(rtrim(a_temp_temp));
 
    vector<int> a(n);
