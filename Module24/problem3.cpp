#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s,word;
        getline(cin,s);
        map<string,int> mp;
        stringstream ss(s);
        int count = 0;
        string highest = "";
        while(ss >> word){
            mp[word]++;
            if(mp[word] > count){
                count = mp[word];
                highest = word;
            }
        }
        cout << highest << " " << count << endl;
    }
    return 0;
}