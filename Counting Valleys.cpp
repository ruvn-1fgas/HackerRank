 *  1. INTEGER steps
 *  2. STRING path
 */
 
int countingValleys(int steps, string path) {
    int seaLevel = 0;
    
    bool isUnder = false;
    int timeChanged = 0;
    
    for(auto c : path){
        seaLevel += c == 'U' ? 1 : -1;
        
        if(seaLevel < 0 && !isUnder){
            isUnder = true;
            timeChanged += 1;
        }
        
        if(seaLevel >= 0)
            isUnder = false;
    }
    return timeChanged;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string steps_temp;
    getline(cin, steps_temp);
 
    int steps = stoi(ltrim(rtrim(steps_temp)));
 
    string path;
    getline(cin, path);
 
    int result = countingValleys(steps, path);
