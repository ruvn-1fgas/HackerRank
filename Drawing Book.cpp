string ltrim(const string &);
string rtrim(const string &);
 
/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */
 
int pageCount(int n, int p) {
    int min_left = 0;
    int cur_left = 0, cur_right = 1;
    while (cur_left != p && cur_right != p) {
        ++min_left;
        cur_left += 2;
        cur_right += 2;
    }
    int min_right = 0;
    cur_left = n % 2 == 0 ? n : n - 1;
    cur_right = cur_left + 1;
    
    while (cur_left != p && cur_right != p) {
        ++min_right;
        cur_left -= 2;
        cur_right -= 2;
    }
    
    return min(min_left, min_right);
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
