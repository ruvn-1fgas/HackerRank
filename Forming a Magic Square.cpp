    {8, 1, 6, 3, 5, 7, 4, 9, 2},
    {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {2, 9, 4, 7, 5, 3, 6, 1, 8},
    {6, 7, 2, 1, 5, 9, 8, 3, 4},
    {6, 1, 8, 7, 5, 3, 2, 9, 4},
    {8, 3, 4, 1, 5, 9, 6, 7, 2},
    {4, 9, 2, 3, 5, 7, 8, 1, 6},
    {2, 7, 6, 9, 5, 1, 4, 3, 8}
};
 
int formingMagicSquare(vector<vector<int>> s) {
    vector<int> matrix;
    for(int i = 0; i < s[0].size(); i++)
        for(int j = 0; j < s[1].size(); j++)
            matrix.push_back(s[i][j]);
    int min_cost = 100;
    for (int i = 0; i < 8; i++) {
        int cost = 0;
        for (int j = 0; j < 9; j++) cost += abs(matrix[j] - magic_squares_3x3[i][j]);
        if (cost < min_cost) 
        min_cost = cost;
    }
    return min_cost;
}
 
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */
const int magic_squares_3x3[8][9] = {
 
/*
 * Complete the 'formingMagicSquare' function below.
 *
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
