#include <iostream>
#include<vector>
#include<string>
#include<typeinfo>
using namespace std;
int main()

{   int i;
    string name;
    vector<string> cars={"bmw","rr","hell"};
    for(i=0;i<=2;i++){
        cout<< cars[i] <<" ";
    }
    name="Rishabh j";
    cout<<typeid(name).name();
    return 0;
}


