// mag-iinput si user ng kanyang budget at calorie intake
// magsusuggest ang application ng

#include <iostream>
#include <string>

using namespace std;

double result;
string bmiResult;

class Info {
public:
    float weight;
    float height;
    string units;
    string mass = bmiResult;
};

void weightloss(){
    cout << "Dito ilalagay yung function para sa weight loss";
}

void buffMeUp(){
    cout << "Dito ilalagay yung function para sa pagpapalaki ng katawan";
}

void weightgain(){
    cout << "Dito ilalagay yung function para sa weight gain";
}


void underweight(){
    cout << "underweight";
}

void normalweight(){
    cout << "normalweight";
}

void overweight(){
    cout << "overweight";
}

void obese(){
    cout << "obese";
}


void bmi(float h, float w, string units) {
    float newHeight = h;

    if (units == "cm") {
        newHeight = h / 100;
    }

    result = w / (newHeight * newHeight);
    cout << "Your BMI is: " << result << endl;

    if (result < 18.5) {
        cout << "Facts about underweight" << endl;
        bmiResult = "underweight";
        underweight();
    } else if (result >= 18.5 && result <= 24.9) {
        cout << "Facts about normal" << endl;
        bmiResult = "normal";
        normalweight();
    } else if (result >= 25 && result <= 30) {
        cout << "Facts about overweight" << endl;
        bmiResult = "overweight";
        overweight();
    } else {
        cout << "Facts about obese" << endl;
        bmiResult = "OBESE";
        obese();
    }
}

int main() {
    int choice;

    Info user;

    cout << "Enter your Height: ";
    cin >> user.height;
    cout << "Enter the unit of height [cm/m]: ";
    cin >> user.units;

    cout << "Enter your Weight: ";
    cin >> user.weight;

    bmi(user.height, user.weight, user.units);

    cout << endl << endl;
    cout << "========================================================================";
    cout << "\n\t[1] Weight Loss";
    cout << "\n\t[2] Gain Muscles";
    cout << "\n\t[3] Gain Weight";
    cout << endl;
    cout << "Your Choice: ";
    cin >> choice;

    if(choice == 1){
        weightloss();
    }else if(choice == 2){
        buffMeUp();
    }else if(choice == 3){
        weightgain();
    }

    return 0;
}

