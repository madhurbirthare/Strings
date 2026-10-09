#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"enter the name: ";
    getline(cin, name);
    cout<<"your name is"<<name;
    // by using direct fxn.
    cout<<"\nlength of name is "<<name.size();
    
    // by usnig concept of traverse
    int count=0;
    for(int i=0; name[i]!= '\0'; i++){
        count++;
    }
    cout<<"\n length is "<<count;
    cout<<"\n\\n"<<"\\0";
    return 0;
}