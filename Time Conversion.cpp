            temp = "";
        }
    res.push_back(temp);
    return res;
}
 
string timeConversion(string s) {
    bool f = false;
    if(s.find("PM") != string::npos)
        f = true;
    s = s.substr(0, s.size() - 2);
    vector<string> vec = split(s, ':');
    
    if(f){
        if(vec[0] == "12")
            return "12:" + vec[1] + ':' + vec[2]; 
        return vec[0] > "12" ? vec[0] + ':' + vec[1] + ':' + vec[2] : 
            to_string(stoi(vec[0]) + 12) + ':' + vec[1] + ':' + vec[2];
    }    
    else {
        if(vec[0] == "12") return "00:" + vec[1] + ':' + vec[2]; 
        return vec[0] + ':' + vec[1] + ':' + vec[2];       
    }
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string s;
    getline(cin, s);
 
    string result = timeConversion(s);
 
    fout << result << "\n";
 
    fout.close();
 
    return 0;
}
