#include <bits/stdc++.h>
using namespace std;
void fun(int* &p){
    int y = 100;
    p = &y;
    cout << "In function: " << &p << endl;
}
int main(){
    int x = 10;
    int* p = &x;
    fun(p);
    cout << "Main function: " << &p << endl;
    return 0;
}