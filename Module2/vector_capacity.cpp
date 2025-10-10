#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3};
    cout << v.size() << endl; // 3

    cout << v.max_size() << endl; // maximum size ber kore

    cout << v.capacity() << endl; // eta bortomane jei koyekta element ache oi size print kore
    // tobe element change hole auto size o change hoye jay
    v.push_back(4);
    cout << v.capacity() << endl; // capacity always double kore increse hoy

    v.clear(); // size clear kore dibe orthat 0 but value sei gulo thakbe
    cout << v.size() << endl; // 0
    cout << v[1] << endl; // 2

    cout << v.empty() << endl; // empty ache naki seta true or false akare bole dey
    v.resize(5);
    cout << v.size() << endl;
    return 0;
}