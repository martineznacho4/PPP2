#include "../std_lib_facilities.h"

int main() {
    double val1;

    double smallest = 0;
    double largest = 0;

    double sum = 0;

    string unit;
    int counter = 0;

    vector<double> values;

    while (cin >> val1 >> unit) {
        if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft") {
            if (unit == "cm") {
                sum += val1 / 100;
                values.push_back(val1 / 100);
            } else if (unit == "m") {
                sum += val1;
                values.push_back(val1);
            } else if (unit == "in") {
                sum += val1 / 39.37;
                values.push_back(val1 / 39.37);
            }

            else if (unit == "ft") {
                sum += val1 / 3.281;
                values.push_back(val1 / 3.281);
            }

            if (val1 < smallest) {
                smallest = val1;
                cout << "The smallest so far \n";
            }
            if (val1 > largest) {
                largest = val1;
                cout << "The largest so far \n";
            }

            ++counter;

            cout << "counter: " << counter << "\nsum: " << sum << '\n';
        }
    }

    sort(values.begin(), values.end());

    for (int i = 0; i < values.size(); ++i) {
        cout << values[i] << '\n';
    }

    return 0;
}
