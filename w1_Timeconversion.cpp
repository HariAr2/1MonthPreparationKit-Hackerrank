#include <bits/stdc++.h>

using namespace std;

/*. THE SOLUTION IS THE CODE BELOW. UwU
 string timeConversion(string s) {
    int h=stoi(s.substr(0,2));
    string a;
    if(s[8]=='A'&&h==12){
        a="00";
        s.replace(0,2,a);
        s.erase(s.size()-2,2);
        s[0]=a[1];
        s[1]=a[1];
    }
    if(s[8]=='P'&&h<12){
        h+=12;
        s.replace(0,2,to_string(h));
        s.erase(s.size()-2,2);
    }
    return s.substr(0,8);
}

 */

string timeConversion(string s) {
    int h=stoi(s.substr(0,2));
    string a;
    if(s[8]=='A'&&h==12){
        a="00";
        s.replace(0,2,a);
        s.erase(s.size()-2,2);
        s[0]=a[1];
        s[1]=a[1];
    }
    if(s[8]=='P'&&h<12){
        h+=12;
        s.replace(0,2,to_string(h));
        s.erase(s.size()-2,2);
    }
    return s.substr(0,8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
