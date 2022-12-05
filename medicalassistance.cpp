#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <chrono>
using namespace std;

int main() {
    bool valid = false;
    string firstSelection, secondSelection;
    cout << "Welcome to Medical Assistance's Care Rec Tool"
            "---------------------------------------------"
            "1) Make a Recommendation"
            "2) Print Database"
            "3) Exit"<<endl;
    cout << "---------------------------------------------";
    while (!valid) {
        cout << "Please make a selection:" << endl;
        cin >> firstSelection;
        if (firstSelection.compare("1")==0||firstSelection.compare("2")==0||firstSelection.compare("3")==0) {
            valid = true;
            break;
        }
        cout << "Invalid selection."<<endl;
    }
    fstream file("hospitals.csv");

    //timing system from https://stackoverflow.com/questions/11062804/measuring-the-runtime-of-a-c-code
    auto start = chrono::system_clock::now();

    auto end = chrono::system_clock::now();
    //calculate time taken to initially create all hospital objects in seconds
    auto elapsed = chrono::duration_cast<std::chrono::seconds>(end - start);
    cout << elapsed.count() << endl;
    cout << "Initial database loaded in";
    cout << "---------------------------------------------";
    cout << "Which of these criteria is important to you?"
            "1) Location"
            "2) Cost of Care"
            "3) Patient Ratings"
            "4) Timeliness"
            "5) Publicly or Privately Owned"
            "6) Safety"
            "---------------------------------------------"<<endl;
    cout << "Please make a selection:" << endl;
    valid = false;
    while (!valid) {
        cin >> secondSelection;
        if (secondSelection.compare("1")==0||secondSelection.compare("2")==0||secondSelection.compare("3")==0||secondSelection.compare("4")==0||secondSelection.compare("5")==0||secondSelection.compare("6")==0) {
            valid = true;
            break;
        }
        cout << "Invalid selection."<<endl;
    }
}