#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        if(65 <= s[i] && s[i] < 97) {
            if(90 < s[i] + 13) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        } else if (97 <= s[i] && s[i] <= 122) {
            if(122 < s[i] + 13) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }
        cout << s[i];
    }

    return 0;
}