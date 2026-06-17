#include<iostream>
#include<string.h>
using namespace std;

class str{
    char *s1;
    char s4[10];
    public:
        str(){
            cout << "Enter string: ";
            s1 = new char[10];
            cin >> s1;
            cout << "\n";
        }
        char *copy(str st1){
            //char s4[10];
            strcpy(s4, st1.s1);
            return s4;
        }
        char *stringmerge(str st1, str st2){
            //char s4[20];
            strcpy(s4, st1.s1);
            strcat(s4, st2.s1);
            return s4;
        }
        char *stringreversal(str st1){
            //char s4[10];
            //strcpy(s4, st1.s1);
            strrev(st1.s1);
            return s1;
        }
};

int main(){
    str s1, s2;
    cout << "Copied string: " << s1.copy(s1) << endl;
    cout << "Merged string: " << s1.stringmerge(s1, s2) << endl;
    cout << "Reversed string: " << s1.stringreversal(s1) << endl;
}