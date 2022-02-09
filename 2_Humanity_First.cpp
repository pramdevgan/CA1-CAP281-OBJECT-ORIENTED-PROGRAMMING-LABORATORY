/*/////////////////////////////////
||  Name : Pramatma Vishwakarm    ||
||  Class : M.Sc IT               ||
||  Roll No. : A32                ||
||  Set: B (Even Roll No)         ||
||  Reg. No. : 12103282           ||
/////////////////////////////////*/

#include <iostream>
#include<math.h>
using namespace std;

void string_value (){
    char ch, str[200];
    int i = 0, val;

    cout<<"Enter the String: ";
    gets(str);
    cout << "\nCharacter   |  ASCII Value\n";
    while (str[i]){
        ch = str[i];
        val = ch;
        cout << ch << "\t    |     " << val <<endl;
        i++;
    }
}
int main () {
    
    string_value ();

    char str1[] = "c";
    cout << char (str1[1]) << endl;
    
    char str[] = {"Humanity First"};
    cout << "******* String Addition ********" << endl;
    cout << "\t "<< char(str[0]) << " + " << char(str[1]) << ": ";
    cout << (char) str[0] + str[1] << endl << endl;

    cout << "******* String Subtraction ********" << endl;
    cout << "\t "<< char(str[4]) << " + " << char(str[5]) << ": ";
    cout << (char) str[4] - str[5] << endl << endl;

    cout << "******* String Multiplication ********" << endl;
    cout << "\t "<< char(str[3]) << " * " << char(str[6]) << ": ";
    cout << (char) str[3] * str[6] << endl << endl;

    cout << "******* String Division ********" << endl;
    cout << "\t "<< char(str[7]) << " * " << char(str[9]) << ": ";
    cout << (char) str[7] / str[9] << endl << endl;

    cout << "******* String Modulus ********" << endl;
    cout << "\t "<< char(str[4]) << " % " << char(str[3]) << ": ";
    cout << (char) str[4] % str[3] << endl << endl;

}