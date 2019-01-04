#include <vector>
#include <iostream>
using namespace std;
int main(int argc,char * * argv){
    vector<int> ves;
    cout<<ves.size()<<" "<<ves.capacity()<<endl;
    int i=0;
    while(i!=5){
        i++;
        ves.push_back(i);
    }
    cout<<ves.size()<<" "<<ves.capacity()<<endl;
    while(i!=ves.capacity()){
        i++;
        ves.push_back(i);
    }
    cout<<ves.size()<<" "<<ves.capacity()<<endl;
    ves.push_back(99);
    cout<<ves.size()<<" "<<ves.capacity()<<endl;
    cout<<"i= "<<i<<endl;
    while((i+1)!=ves.capacity()){
        i++;
        if(i<=16)
            cout<<"i: "<<i<<"  ves.capacity(): "<<ves.capacity()<<endl;
        ves.push_back(i);
    }
    cout<<ves.size()<<" "<<ves.capacity()<<endl;
    ves.push_back(99);
    cout<<ves.size()<<" "<<ves.capacity()<<endl;
    return 0;
}