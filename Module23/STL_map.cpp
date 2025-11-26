#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    mp["Bony"] = 7;  // O(log n)
    mp["Amin"] = 10;
    mp["BAmin"] = 12;
    cout << mp["Bony"] << endl; // 7
    //cout << mp["md"] << endl; // 0  karon ei name a kono value nai tai 0
    for(auto it = mp.begin(); it!=mp.end(); it++){  // O(n log n)
        cout << it->first << " " << it->second << endl;  // O(log n)
    }

    if(mp.count("dd")){ // oi index er value ache kina check korse count() use kore
        cout << "Ache" << endl;
    }
    else{
        cout << "Nai" << endl;
    }
    return 0;
}