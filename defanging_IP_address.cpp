#include <iostream>
using namespace std;

int main (){
    string str;
    cout<<"address: ";
    getline(cin, str);
    int size= str.size();

    for(int i=0; i<size; i++){
        if(str[i]!=46){
        cout<<str[i];
        }
       if(str[i]==46){
       //str[i]= char(str[i]+45);
       cout<<char(91)<<str[i]<<char(93);
       }
    }
//    cout<<str;
    return 0;
}