#include <iostream>
using namespace std;

int main (){
    string str;
    cout<<"enter: ";
    int c=0;
    getline(cin, str);
    char s=' ';

    for(int i=0; i<str.size(); i++){
     if(str[i]==s){
        c++;
     }
    }
    cout<<c+1;
   
    return 0;
}