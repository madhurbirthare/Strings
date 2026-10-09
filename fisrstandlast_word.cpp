#include <iostream>
using namespace std;

int main(){
string madh;
cout<<"enter: ";
getline(cin, madh);
int length= madh.size();

//for(int i=0; i<madh.size(); i++){
    cout<<"first="<<madh[0]<<"last="<<madh[length];
// }   
    return 0;
}