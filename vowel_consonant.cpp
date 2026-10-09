#include <iostream>
using namespace std;

int main(){
string str;
int vowel=0,conso=0;
cout<<"enter something: ";
getline(cin, str);
for(int i=0; i<str.size(); i++){
 if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            vowel++;
            }
 else{
    conso++;
 }
}
cout<<"vowels are"<<vowel<<" conso = "<<conso;
    return 0;
}