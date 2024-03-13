#include <iostream>
using namespace std;

int main()
{

    // int grade, sum;   If I don't initialize sum, it gives a result like this:
    
    int grade, sum = 0;
    for(int i=0; i < 3; i++) {
        do {
            cout << "Enter grade " << i + 1 << ": ";
            // cin >> grade;  This line doesn't work on VS Code.
            // hard code in the grade instead
            if (i == 0) {
                grade = 3;
                cout << grade << endl;;
            }
            else if (i == 1) {
                grade = 2;
                cout << grade << endl;;

            }
            else {
                grade = 5;
                cout << grade << endl;;

            }
        } while (grade < 1 || grade > 5);
        sum += grade;
    }

    cout << "Sum = " << sum << endl;
    // cout << "Avg grade= " << sum / 3 << endl;
    // that line gives an incorrect value, since sum and 3 are both integers

    cout << "Avg grade= " << (float)sum / 3.0 << endl;

    // note that either (float) or putting a .0 on 3 is enough
    // to convert the result to a float. Both aren't necessary here.


}