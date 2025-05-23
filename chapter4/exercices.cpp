#include "../std_lib_facilities.h"

int main() {
    cout << "Enter the exercise: (2-24)\n";
    int exercise;
    cin >> exercise;

    switch (exercise) {
        case 2: {
            vector<double> temps;
            double temp;

            while (cin >> temp) temps.push_back(temp);

            double sum = 0;
            for (size_t i = 0; i < temps.size(); ++i) {
                sum += temps[i];
            }
            cout << "Average temperature: " << sum / temps.size() << endl;

            sort(temps.begin(), temps.end());

            if (temps.size() % 2 != 0) {
                cout << "Median temperature: " << temps[temps.size() / 2] << endl;
            } else {
                cout << "Median temperature: "
                     << (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
            }

            break;
        }
        case 3: {
            vector<double> distances;
            double distance;

            double total_distance = 0;

            while (cin >> distance) {
                distances.push_back(distance);
                total_distance += distance;
            }
            cout << "The total distance is: " << total_distance << endl;

            if (distances.empty()) {
                cout << "No distances were entered" << endl;
                return 0;
            }

            double smallest = distances[0];
            double largest = distances[0];

            for (size_t i = 0; i < distances.size(); ++i) {
                if (distances[i] > largest) {
                    largest = distances[i];
                }
                if (distances[i] < smallest) {
                    smallest = distances[i];
                }
            }
            cout << "The smallest distance is " << smallest << " and the largest is " << largest
                 << endl;

            cout << "The mean distance is " << total_distance / distances.size();

            break;
        }
        case 4: {
            cout << "- Guessing game -\n";

            cout << "Think of a number between 1 and 100\n";

            int floor = 1;
            int roof = 100;

            char guess;
            int counter = 0;

            while (floor < roof && counter < 7) {
                int mid = (floor + roof) / 2;

                cout << "Is your number higher than " << mid << "? (y/n)";
                cin >> guess;

                switch (guess) {
                    case 'y':
                        floor = mid + 1;
                        break;
                    case 'n':
                        roof = mid;
                        break;
                    default:
                        cout << "Please only answer 'y' or 'n'\n";
                        continue;
                }

                ++counter;
            }

            cout << "Your number is: " << floor << endl;

            break;
        }
        case 5: {
            cout << "- Simple Calculator -" << endl;

            cout << "Write your operation in the following format: \n"
                 << "value operation value \n";
            cout << "Supported operations are: " << endl;
            cout << "+ for add" << endl;
            cout << "- for subtract" << endl;
            cout << "* for multiply" << endl;
            cout << "/ for divide" << endl;
            cout << "% for modulus" << endl;

            double val1;
            double val2;
            char operation;

            while (cin >> val1 >> operation >> val2) {
                switch (operation) {
                    case '+':
                        cout << val1 + val2 << endl;
                        break;
                    case '-':
                        cout << val1 - val2 << endl;
                        break;
                    case '*':
                        cout << val1 * val2 << endl;
                        break;
                    case '/':
                        if (val2 != 0) {
                            cout << val1 / val2 << endl;
                        } else {
                            cout << "Cannot divide by zero" << endl;
                        }
                        break;
                    case '%':
                        cout << (int)val1 % (int)val2 << endl;
                        break;
                }
            }

            break;
        }
        case 6: {
            cout << "- Spelling conversion -" << endl;

            vector<string> spelled_numbers = {"zero", "one", "two",   "three", "four",
                                              "five", "six", "seven", "eight", "nine"};

            cout << "Enter the number you wish to evaluate: " << endl;
            string selection;

            while (cin >> selection) {
                // Number by name eg. zero
                bool found = false;
                for (size_t i = 0; i < spelled_numbers.size(); ++i) {
                    if (spelled_numbers[i] == selection) {
                        cout << i << endl;
                        found = true;
                        break;
                    }
                }

                // Ascii values
                if (!found && isdigit((int)selection[0])) {
                    cout << spelled_numbers[selection[0] - '0'] << endl;
                }
            }

            break;
        }
        case 7: {
            // nasty
            cout << "- Simple Calculator -" << endl;

            cout << "Write your operation in the following format: \n"
                 << "value operation value \n";
            cout << "Supported operations are: " << endl;
            cout << "+ for add" << endl;
            cout << "- for subtract" << endl;
            cout << "* for multiply" << endl;
            cout << "/ for divide" << endl;
            cout << "% for modulus" << endl;

            string val1;
            string val2;
            double first_number;
            double second_number;
            char operation;

            vector<string> spelled_numbers = {"zero", "one", "two",   "three", "four",
                                              "five", "six", "seven", "eight", "nine"};

            while (cin >> val1 >> operation >> val2) {
                bool val1_valid = false;
                bool val2_valid = false;
                // Number by name eg. zero
                for (size_t i = 0; i < spelled_numbers.size(); ++i) {
                    if (spelled_numbers[i] == val1) {
                        val1_valid = true;
                        first_number = i;
                    }
                    if (spelled_numbers[i] == val2) {
                        val2_valid = true;
                        second_number = i;
                    }
                }

                // Ascii values
                if (!val1_valid && isdigit((int)val1[0])) {
                    first_number = val1[0] - '0';
                    val1_valid = true;
                }

                if (!val2_valid && isdigit((int)val2[0])) {
                    second_number = val2[0] - '0';
                    val2_valid = true;
                }

                if (val1_valid && val2_valid) {
                    switch (operation) {
                        case '+':
                            cout << first_number + second_number << endl;
                            break;
                        case '-':
                            cout << first_number - second_number << endl;
                            break;
                        case '*':
                            cout << first_number * second_number << endl;
                            break;
                        case '/':
                            if (second_number != 0) {
                                cout << first_number / second_number << endl;
                            } else {
                                cout << "Cannot divide by zero" << endl;
                            }
                            break;
                        case '%':
                            cout << (int)first_number % (int)second_number << endl;
                            break;
                    }
                }
            }

            break;
        }
        case 8: {
            cout << "- Doubling grains -\n";
            cout << "Enter the desired amount of grains: \n";
            double goal;
            cin >> goal;

            double current_square = 1;
            double grains = 1;
            double total = 1;

            while (total < goal) {
                ++current_square;
                grains *= 2;
                total += grains;
                cout << grains << endl;
            }

            cout << "For " << goal << " grains, you need " << current_square << " squares" << endl;
            break;
        }
        case 10: {
            cout << "- Rock, Paper, Scissors -\n";

            cout << "Enter your selection: (r, p, s)";
            char selection;

            vector<char> machine_options = {'r', 'p', 's'};

            while (cin >> selection) {
                char chosen = machine_options[rand() % 3];
                // cout << "DEBUG(chosen): " << chosen << endl;

                switch (selection) {
                    case 'r':
                        switch (chosen) {
                            case 'r':
                                cout << "It's a tie" << endl;
                                break;
                            case 'p':
                                cout << "You lose" << endl;
                                break;
                            case 's':
                                cout << "You win" << endl;
                                break;
                        }
                        break;
                    case 'p':
                        switch (chosen) {
                            case 'r':
                                cout << "You win" << endl;
                                break;
                            case 'p':
                                cout << "It's a tie" << endl;
                                break;
                            case 's':
                                cout << "You lose" << endl;
                                break;
                        }
                        break;
                    case 's':
                        switch (chosen) {
                            case 'r':
                                cout << "You lose" << endl;
                                break;
                            case 'p':
                                cout << "You win" << endl;
                                break;
                            case 's':
                                cout << "It's a tie" << endl;
                                break;
                        }
                        break;
                }
            }

            break;
        }
        case 11:
        case 12:
        case 13:
        case 14:
        case 15: {
            cout << "- Primos! -\n";
            cout << "Calculate the amount of prime numbers until: " << endl;
            int max;
            cin >> max;

            vector<int> primes = {2};

            for (int i = 3; i < max; ++i) {
                bool is_prime = true;
                for (size_t j = 0; j < primes.size(); ++j) {
                    // Primality test
                    // Given an input number, n, check whether it is divisible by any prime number
                    // between 2 and sqrt{n} (i.e., whether the division leaves no remainder). If
                    // so, then n is composite. Otherwise, it is prime.
                    if (primes[j] <= sqrt(i)) {
                        break;
                    }
                    if (i % primes[j] == 0) {
                        is_prime = false;
                    }
                }
                if (is_prime) {
                    primes.push_back(i);
                }
            }

            for (size_t i = 0; i < primes.size(); ++i) {
                cout << primes[i] << endl;
            }
            cout << "There are: " << primes.size() << " prime numbers up until " << max << endl;

            break;
        }
        case 16: {
            cout << "- Find the mode -\n";
            cout << "Enter the sequence of positive integers: " << endl;

            vector<int> sequence;
            int input;

            while (cin >> input) {
                if (input >= 0) {
                    sequence.push_back(input);
                }
            }

            sort(sequence.begin(), sequence.end());

            if (sequence.size() == 0) {
                cout << "You didn't add any numbers" << endl;
                return 0;
            }

            int current = sequence[0];
            int mode = current;
            int count = 1;
            int max_count = 1;

            for (size_t i = 1; i < sequence.size(); ++i) {
                if (sequence[i] == current) {
                    ++count;
                } else {
                    if (count > max_count) {
                        max_count = count;
                        mode = current;
                    }
                    current = sequence[i];
                    count = 1;
                }
            }
            if (count > max_count) {
                max_count = count;
                mode = current;
            }
            cout << "The mode is " << mode << endl;

            break;
        }
        case 17: {
            cout << "- Min, Max and Mode of a String -" << endl;

            string input_word;
            vector<string> words;

            while (cin >> input_word) {
                words.push_back(input_word);
            }

            sort(words.begin(), words.end());

            if (words.size() == 0) {
                cout << "No words added" << endl;
                return 0;
            }

            string min_word = words[0];
            string max_word = words[0];

            string current = words[0];
            string mode = current;
            int count = 1;
            int max_appearances = 1;

            for (size_t i = 0; i < words.size(); ++i) {
                if (words[i].size() < min_word.size()) {
                    min_word = words[i];
                }
                if (words[i].size() > max_word.size()) {
                    max_word = words[i];
                }

                if (words[i] == current) {
                    ++count;
                } else {
                    if (count > max_appearances) {
                        mode = current;
                        max_appearances = count;
                    }
                    current = words[i];
                    count = 1;
                }
            }
            if (count > max_appearances) {
                max_appearances = count;
                mode = current;
            }

            cout << "The min word is: " << min_word << endl;
            cout << "The max word is: " << max_word << endl;
            cout << "The mode word is: " << mode << endl;

            break;
        }
        case 18: {
            cout << "- Cuadratic Equation Solver -" << endl;

            cout << "ax^2 + bx + c = 0" << endl;
            cout << "Enter the terms separated by a space and in order: (a b c)" << endl;

            double coef_a;
            double coef_b;
            double coef_c;

            cin >> coef_a >> coef_b >> coef_c;

            double root_1, root_2;

            double discriminante = sqrt(coef_b*coef_b - 4*coef_a*coef_c);

            root_1 = (-coef_b + discriminante)/(2*coef_a);
            root_2 = (-coef_b - discriminante)/(2*coef_a);

            cout << "The two roots are: " <<endl;
            cout << "X1 = " << root_1 << endl;
            cout << "X2 = " << root_2 << endl;

            

            break;
        }
        case 19: {
            cout << "- Names and scores -" << endl;

            vector<string> names;
            vector<int> scores;

            string name;
            int score;

            while (cin >> name >> score) {
                names.push_back(name);
                scores.push_back(score);
            }

            for (size_t i = 0; i < names.size(); ++i) {
                for (size_t j = i+1; j < names.size(); ++j) {
                    if (names[i] == names[j]) {
                        cout << "Error: Name: " << names[i] << " was duplicated" << endl;
                        return 0;
                    }
                }

                cout << "(" << names[i] << ", " << scores[i] << ")" << endl;
            }

            break;
        }
    }

    return 0;
}
