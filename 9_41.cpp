#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> ves={'a','b','c'};
    string s(ves.begin(),ves.end());
    cout<<s<<endl;
    return 0;
}