/*/////////////////////////////////
||  Name : Pramatma Vishwakarm    ||
||  Class : M.Sc IT               ||
||  Roll No. : A32                ||
||  Set: B (Even Roll No)         ||
||  Reg. No. : 12103282           ||
/////////////////////////////////*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter marks: ";
    int marks;
    cin >> marks;
    string grade;

    grade = (marks >= 90) ? "\tA":
            (marks >= 80) ? "\tB": "\tC";
    cout << grade << endl;
}