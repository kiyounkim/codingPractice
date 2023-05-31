#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double GradeToCredit(string grade);

int main(){
    double finalCredit = 0;
    string className, credit, grade;
    double sumCredit = 0;
    for(int i=0;i<20;i++){
        cin >> className >> credit >> grade;
        if(grade=="P") continue;
        finalCredit += stod(credit)*GradeToCredit(grade);
        sumCredit += stod(credit);
    }
    //print 6 decimal places
    cout << fixed << setprecision(6);
    cout << finalCredit/sumCredit << endl;
}
double GradeToCredit(string grade) {
    string grades[] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
    double credits[] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0};

    for (int i = 0; i < 9; i++) {
        if (grade == grades[i]) {
            return credits[i];
        }
    }

    return 0;
}