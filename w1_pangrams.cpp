#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    set<int>st;
    for(int i=0;i<s.size();i++){
        int asv=0;
        if(s[i]>='a'&&s[i]<='z'){
            asv=s[i]-'a';
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            asv=s[i]-'A';
        }
        st.insert(asv);
    }
    if(st.size()==26){
        return "pangram";
    }
    else{
        return "not pangram";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
