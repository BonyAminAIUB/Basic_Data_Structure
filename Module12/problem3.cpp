#include <bits/stdc++.h>
using namespace std;
int main(){
    list<string> s;
    while(true){
        string val;
        cin >> val;
        if(val == "end"){
            break;
        }
        s.push_back(val);
    }
    //string val;    // same as line 5 to 12
    //while(cin >> val && val != "end"){
    //s.push_back(val);}
    int q;
    cin >> q;
    auto current = s.begin();
    while(q--){
        string command;
        cin >> command;
        if(command == "visit"){
            string web_name;
            cin >> web_name;
            auto isFound = find(s.begin(),s.end(),web_name);
            if(isFound != s.end()){
                current = isFound;
                cout << *isFound << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(command == "next"){
            if(next(current) != s.end()){
                current = next(current);
                cout << *current << endl;
            }
            else{
                cout << "Not Available" << endl; 
            }
        }
        else if(command == "prev"){
            if(current != s.begin()){
                current = prev(current);
                cout << *current << endl;
            }
            else{
                cout << "Not Available" << endl; 
            }
        }
    }
    return 0;
}