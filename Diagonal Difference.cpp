 
    vector<vector<int>> arr(n);
 
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);
 
        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);
 
        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));
 
        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);
 
            arr[i][j] = arr_row_item;
        }
    }
 
    int result = diagonalDifference(arr);
 
    fout << result << "\n";
 
    fout.close();
 
    return 0;
}
 
string ltrim(const string &str) {
    string s(str);
 
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
 
    return s;
}
 
string rtrim(const string &str) {
    string s(str);
