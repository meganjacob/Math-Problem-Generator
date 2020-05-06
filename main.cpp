//Assignment 3b Math Tutor
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <ctime>
# include <cmath>
# include <string>
using namespace std;

int main(){
    cout << "Welcome to this random problem generator." << endl
             << "It generates random addition, subtraction, multiplication, division, and exponential problems." << endl
             << "The program will keep running infinitely however if you want to stop it just hit the 'Stop' button at the top" << endl
             << "Every problem requires an exact answer, ecept the division problems which are rounded to the nearest whole number." << endl;
    while (true){
        unsigned seed = time(0);
        srand(seed);
        int choice = (rand() % 5) + 1;
        switch (choice){
            case 1 : {
                int num1 = (rand()% 1000)+1;
                int num2 = (rand()% 1000)+1;
                int answer = num1 + num2, response;
                cout << "   " << setw(4) << right << num1 << endl
                     << " + " << setw(4) << num2 << endl
                     << "---------" << endl
                     << "Enter the answer here: ";
                cin >> response;
                while( cin.fail()){
                    cin.clear(); //Reset the flags, so you can use cin again
                    cin.ignore(100, '\n'); //Empty the buffer
                }
                if (answer == response)
                    cout << "Congratulations!\nThe answer is "<< answer << "." << endl;
                else
                    cout << "Sorry that is incorrect.\nThe answer is " << answer << "." << endl;
                break;
            }case 2 : {
                int num1 = (rand()% 100)+1;
                int num2 = (rand()% 100)+1;
                int answer = num1 * num2, response;
                cout << "   " << setw(3) << right << num1 << endl
                     << " * " << setw(3) << num2 << endl
                     << "---------" << endl
                     << "Enter the answer here: ";
                cin >> response;
                while( cin.fail()){
                    cin.clear(); //Reset the flags, so you can use cin again
                    cin.ignore(100, '\n'); //Empty the buffer
                }
                if (answer == response)
                    cout << "Congratulations!\nThe answer is "<< answer << "." << endl;
                else
                    cout << "Sorry that is incorrect.\nThe answer is " << answer << "." << endl;
            }case 3 : {
                int num1 = (rand()% 1000)+1;
                int num2 = (rand()% 1000)+1;
                int answer = num1 - num2, response;
                cout << "   " << setw(3) << right << num1 << endl
                     << " - " << setw(3) << num2 << endl
                     << "---------" << endl
                     << "Enter the answer here: ";
                cin >> response;
                while( cin.fail()){
                    cin.clear(); //Reset the flags, so you can use cin again
                    cin.ignore(100, '\n'); //Empty the buffer
                }
                if (answer == response)
                    cout << "Congratulations!\nThe answer is "<< answer << "." << endl;
                else
                    cout << "Sorry that is incorrect.\nThe answer is " << answer << "." << endl;
            }case 4 : {
                double num1 = (rand()% 100)+1;
                double num2 = (rand()% 100)+1;
                float answer = round (num1 / num2), response;
                cout << "   " << setw(3) << right << num1 << endl
                     << " % " << setw(3) << num2 << endl
                     << "---------" << endl
                     << "Enter the answer here: ";
                cin >> response;
                while( cin.fail()){
                    cin.clear(); //Reset the flags, so you can use cin again
                    cin.ignore(100, '\n'); //Empty the buffer
                }
                if ( answer == response)
                    cout << "Congratulations!\nThe answer is "<< answer << "." << endl;
                else
                    cout << "Sorry that is incorrect.\nThe answer is " << answer << "." << endl;
            }case 5 : {
                int num1 = (rand()% 12)+1;
                int num2 = (rand()% 10)+1;
                int answer = pow(num1, num2), response;
                cout << "   " << setw(3) << right << num2 << endl
                     << "  " << setw(3) << num1 << endl
                     << "Enter the answer here: ";
                cin >> response;
                while( cin.fail()){
                    cin.clear(); //Reset the flags, so you can use cin again
                    cin.ignore(100, '\n'); //Empty the buffer
                }
                if (answer == response)
                    cout << "Congratulations!\nThe answer is "<< answer << "." << endl;
                else
                    cout << "Sorry that is incorrect.\nThe answer is " << answer << "." << endl;
            }
            
        }
    }
}
