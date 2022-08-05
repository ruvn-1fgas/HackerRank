vector<string> split_string(string);
 
// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    return abs(z-x) < abs(z-y) ? "Cat A" : abs(z-x) == abs(z-y) ? "Mouse C" : "Cat B";
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string xyz_temp;
        getline(cin, xyz_temp);
 
        vector<string> xyz = split_string(xyz_temp);
 
        int x = stoi(xyz[0]);
 
        int y = stoi(xyz[1]);
 
        int z = stoi(xyz[2]);
 
        string result = catAndMouse(x, y, z);
 
        fout << result << "\n";
    }
 
    fout.close();
 
    return 0;
}
 
