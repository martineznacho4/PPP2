#include "../std_lib_facilities.h"

double ctok(double c)  // converts Celsius to Kelvin
{
    if (c < -273.15) {
        error("Unable to convert. Temperature too low");
    }

    double k = c + 273.15;
    return k;
}

double ktoc(double k) {
    if (k < 0) {
        error("Minimum Kelvin is 0");
    }
    double c = k - 273.15;
    return c;
}
int main() {
    cout << "Enter the exercise: (2-14)" << endl;
    int exercise;
    cin >> exercise;
    switch (exercise) {
        case 2:
        case 3:
        case 4: {
            cout << "- Celsius to Kelvin -" << endl;
            cout << "Enter the temperature to convert: ";
            double c = 0;        // declare input variable
            cin >> c;            // retrieve temperature to input variable
            double k = ctok(c);  // convert temperature
            cout << k << '\n';   // print out temperature
            break;
        }
            // Errors:
            //     return int -> return k
            //     undeclared variable d -> cin >> c
            //     ctock("c") -> ctock(c)
            //     Cout -> cout
            //     /n -> \n

        case 5:

        {
            cout << "- Celsius to Kelvin | Kelvin to Celsius -" << endl;
            cout << "Which mode do you want to use?" << endl;
            cout << "k for Kelvin to Celsius" << '\n' << "c for Celsius to Kelvin" << endl;
            char mode;
            cin >> mode;
            cout << "Enter the temperature to convert: ";

            switch (mode) {
                case 'k': {
                    double k = 0;
                    cin >> k;
                    double c = ktoc(k);
                    cout << c << '\n';
                    break;
                }
                case 'c': {
                    double c = 0;        // declare input variable
                    cin >> c;            // retrieve temperature to input variable
                    double k = ctok(c);  // convert temperature
                    cout << k << '\n';   // print out temperature
                    break;
                }
            }
            break;
        }
    case 6:
        
    }
    return 0;
}
