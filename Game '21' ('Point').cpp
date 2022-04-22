#include <iostream>
#include <stdlib.h> // for function srand()
#include <time.h> //for function time()
using namespace std; 

// Functions, that generate a random numbers within specified limits

int GetRandomNumber(int min, int max) {
    srand(time(NULL));

    int num = min + rand() % (max - min + 1);

    return num;
}

// Random numbers, thanks to which numbers will not be repeated in the future

int r1 = GetRandomNumber(0, 30000);

int GetRandomNumber2(int min, int max) {
    srand(time(NULL) + r1);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r2 = GetRandomNumber2(0, 30000);

int GetRandomNumber3(int min, int max) {
    srand(time(NULL) + r2);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r3 = GetRandomNumber3(0, 30000);

int GetRandomNumber4(int min, int max) {
    srand(time(NULL) + r3);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r4 = GetRandomNumber4(0, 30000);

int GetRandomNumber5(int min, int max) {
    srand(time(NULL) + r4);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r5 = GetRandomNumber5(0, 30000);

int GetRandomNumber6(int min, int max) {
    srand(time(NULL) + r5);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r6 = GetRandomNumber6(0, 30000);

int GetRandomNumber7(int min, int max) {
    srand(time(NULL) + r6);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r7 = GetRandomNumber7(0, 30000);

int GetRandomNumber8(int min, int max) {
    srand(time(NULL) + r7);

    int num = min + rand() % (max - min + 1);

    return num;
}

int r_sum = GetRandomNumber8(0, 30000);

int GetRandomSum(int min, int max) {
    srand(time(NULL) + r_sum);

    int num = min + rand() % (max - min + 1);

    return num;
}

// Program start

int main()
{
    // Creating variables
    int num1, num2, num3, num4, num5, num6, num7, num8, first_sum, second_sum, third_sum, fourth_sum, fifth_sum, sixth_sum, seventh_sum, eighth_sum, ninth_sum;
    string answer, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9;

    // Generating random numbers
    num1 = GetRandomNumber(2, 11);
    num2 = GetRandomNumber2(2, 11);
    num3 = GetRandomNumber3(2, 11);
    num4 = GetRandomNumber4(2, 11);
    num5 = GetRandomNumber5(2, 11);
    num6 = GetRandomNumber6(2, 11);
    num7 = GetRandomNumber7(2, 11);
    num8 = GetRandomNumber8(2, 11);

    // Game start
    cout << "Are you ready to start the game? (y or n)\n";
    cin >> answer;

    if (answer == "n" || answer == "N") {
        cout << "Come back, when you will be ready";
    }

    else if (answer == "y" || answer == "Y") {

        // Generating random sum
        first_sum = GetRandomSum(4, 22);

        // Data output
        cout << "Ok. Let`s start the game\n";
        cout << "You just got 2 random numbers, their sum = " << first_sum << ".Your goal is to collect 21 points\n"; //1st

        // Checking the first sum

        // Automatic win
        if (first_sum == 21) {
            cout << "I know, that your sum is equal to 21. My congratulations!)";
        }

        // Automatic loss
        else if (first_sum == 22) {
            cout << "I know, that your sum is equal to 22. Bad luck(";
        }

        // Continuation of the game
        else if (first_sum != 21 && first_sum != 22) {

            // Possibility to continue the game
            cout << "Do you want to take one more number? (y or n)\n";
            cin >> answer2;

            // User choice loss
            if (answer2 == "n" || answer2 == "N") {
                cout << "You don`t collect 21 point. You lose";
            }

            // Continuation of the game
            else if (answer2 == "y" || answer2 == "Y") {

                // Formation of the second sum
                second_sum = num1 + first_sum;

                // Output of results
                cout << "It is number " << num1 << ". Your sum = " << second_sum << "\n";

                // Checking the second sum

                // User win
                if (second_sum == 21) {
                    cout << "Your sum is equal to 21. You win, my congratulations!)";
                }

                // User loss
                else if (second_sum > 21) {
                    cout << "Your sum bigger than 21. You lose";
                }

                // Possibility to continue the game
                else if (second_sum < 21) {
                    cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n";
                    cin >> answer3;

                    // User choice loss
                    if (answer3 == "n" || answer3 == "N") {
                        cout << "You don`t collect 21 point. You lose";
                    }

                    // Continuation of the game
                    else if (answer3 == "y" || answer3 == "Y") {

                        // Formation of the third sum
                        third_sum = num2 + second_sum;

                        // Output of results
                        cout << "It is number " << num2 << ". Your sum = " << third_sum << "\n";

                        // User win
                        if (third_sum == 21) {
                            cout << "Your sum is equal to 21. You win, my congratulations!)";
                        }

                        // User loss
                        else if (third_sum > 21) {
                            cout << "Your sum bigger than 21. You lose";
                        }

                        // Possibility to continue the game
                        else if (third_sum < 21) {
                            cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n";
                            cin >> answer4;

                            // User choice loss
                            if (answer4 == "n" || answer4 == "N") {
                                cout << "You don`t collect 21 point. You lose";
                            }

                            // Continuation of the game
                            if (answer4 == "y" || answer4 == "Y") {

                                // Formation of the fourth sum
                                fourth_sum = num3 + third_sum;

                                // Output of results
                                cout << "It is number " << num3 << ". Your sum = " << fourth_sum << "\n";

                                // User win
                                if (fourth_sum == 21) {
                                    cout << "Your sum is equal to 21. You win, my congratulations!)";
                                }

                                // User loss
                                else if (fourth_sum > 21) {
                                    cout << "Your sum bigger than 21. You lose";
                                }

                                // Possibility to continue the game
                                else if (fourth_sum < 21) {
                                    cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n";
                                    cin >> answer5;

                                    // User choice loss
                                    if (answer5 == "n" || answer5 == "N") {
                                        cout << "You don`t collect 21 point. You lose";
                                    }

                                    // Continuation of the game
                                    else if (answer5 == "y" || answer5 == "Y") {

                                        // Formation of the fifth sum
                                        fifth_sum = num4 + fourth_sum;

                                        // Output of results
                                        cout << "It is number " << num4 << ". Your sum = " << fifth_sum << "\n";

                                        // User win
                                        if (fifth_sum == 21) {
                                            cout << "Your sum is equal to 21. You win, my congratulations!)";
                                        }

                                        // User loss
                                        else if (fifth_sum > 21) {
                                            cout << "Your sum bigger than 21. You lose";
                                        }

                                        // Possibility to continue the game
                                        else if (fifth_sum < 21) {
                                            cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n";
                                            cin >> answer6;

                                            // User choice loss
                                            if (answer6 == "n" || answer6 == "N") {
                                                cout << "You don`t collect 21 point. You lose";
                                            }

                                            // Continuation of the game
                                            else if (answer6 == "y" || answer6 == "Y") {

                                                // Formation of the sixth sum
                                                sixth_sum = num5 + fifth_sum;

                                                // Output of results
                                                cout << "It is number " << num5 << ". Your sum = " << sixth_sum << "\n";

                                                // User win
                                                if (sixth_sum == 21) {
                                                    cout << "Your sum is equal to 21. You win, my congratulations!)";
                                                }

                                                // User loss
                                                else if (sixth_sum > 21) {
                                                    cout << "Your sum bigger than 21. You lose";
                                                }

                                                // Possibility to continue the game
                                                else if (sixth_sum < 21) {
                                                    cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n"; //7th
                                                    cin >> answer7;

                                                    // User choice loss
                                                    if (answer7 == "n" || answer7 == "N") {
                                                        cout << "You don`t collect 21 point. You lose";
                                                    }

                                                    // Continuation of the game
                                                    else if (answer7 == "y" || answer7 == "Y") {

                                                        // Formation of the seventh sum
                                                        seventh_sum = num6 + sixth_sum;

                                                        // Output of results
                                                        cout << "It is number " << num6 << ". Your sum = " << seventh_sum << "\n";

                                                        // User win
                                                        if (seventh_sum == 21) {
                                                            cout << "Your sum is equal to 21. You win, my congratulations!)";
                                                        }

                                                        // User loss
                                                        else if (seventh_sum > 21) {
                                                            cout << "Your sum bigger than 21. You lose";
                                                        }

                                                        // Possibility to continue the game
                                                        else if (seventh_sum < 21) {
                                                            cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n";
                                                            cin >> answer8;

                                                            // User choice loss
                                                            if (answer8 == "n" || answer8 == "N") {
                                                                cout << "You don`t collect 21 point. You lose";
                                                            }

                                                            // Continuation of the game
                                                            else if (answer8 == "y" || answer8 == "Y") {

                                                                // Formation of the eighth sum
                                                                eighth_sum = num7 + seventh_sum;

                                                                // Output of results
                                                                cout << "It is number " << num7 << ". Your sum = " << eighth_sum << "\n";

                                                                // User win
                                                                if (eighth_sum == 21) {
                                                                    cout << "Your sum is equal to 21. You win, my congratulations!)";
                                                                }

                                                                // User loss
                                                                else if (eighth_sum > 21) {
                                                                    cout << "Your sum bigger than 21. You lose";
                                                                }

                                                                // Possibility to continue the game
                                                                else if (eighth_sum < 21) {
                                                                    cout << "Your sum less than 21. Do you want to take one more number? (y or n)\n"; //9th
                                                                    cin >> answer9;

                                                                    // User choice loss
                                                                    if (answer9 == "n" || answer9 == "N") {
                                                                        cout << "You don`t collect 21 point. You lose";
                                                                    }

                                                                    // Continuation of the game
                                                                    else if (answer9 == "y" || answer9 == "Y") {

                                                                        // Formation of the ninth sum
                                                                        ninth_sum = num8 + eighth_sum;

                                                                        // Output of results
                                                                        cout << "It is number " << num8 << ". Your sum = " << ninth_sum << "\n";

                                                                        // User win
                                                                        if (ninth_sum == 21) {
                                                                            cout << "Your sum is equal to 21. You win, my congratulations!)";
                                                                        }

                                                                        // User loss
                                                                        else if (ninth_sum != 21) {
                                                                            cout << "You lose. Collecting 21 is no longer possible(";
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
