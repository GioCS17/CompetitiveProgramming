#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<char,char> dict={{'1','`'},{'2','1'},{'3','2'},{'4','3'},{'5','4'},{'6','5'},{'7','6'},{'8','7'},{'9','8'},{'0','9'},{'-','0'},{'=','-'},
                         {'W','Q'},{'E','W'},{'R','E'},{'T','R'},{'Y','T'},{'U','Y'},{'I','U'},{'O','I'},{'P','O'},{'[','P'},{']','['},{'\\',']'},
                         {'S','A'},{'D','S'},{'F','D'},{'G','F'},{'H','G'},{'J','H'},{'K','J'},{'L','K'},{';','L'},{'\'',';'},
            {'X','Z'},{'C','X'},{'V','C'},{'B','V'},{'N','B'},{'M','N'},{',','M'},{'.',','},{'/','.'}};

    string cad;
    while(getline(cin,cad)){
    for(char &c:cad){
        if(('0'<=c && c<='9') ||('A'<c && c<'Z')||  c=='-' || c=='=' || c=='/' || c==',' || c=='.' || c=='/' || c=='[' || c==']' || c==';' || c=='\\' || c=='\'' && c!='Q')
            cout<<dict[c];
        else
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}