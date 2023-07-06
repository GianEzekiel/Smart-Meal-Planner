// mag-iinput si user ng kanyang budget at calorie intake
// magsusuggest ang application ng
#include <ctime>
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
    int x;
    srand(time(NULL))
    x=rand()%5
    cout<<"Random Fact: ";
    if (x==0)
    cout<< "Being underweight may be a symptom of other conditions like cancer, tuberculosis, and hyperthyroidism\n";
    else if (x==1)
    cout<< "Being underweight weakens the immune system, and for females, it causes issues with their menstruation and pregnancies, as well as increases the risk of infertility\n";
    else if (x==2)
    cout<< "8.8% of men and 9.7% women in the world are underweight\n"
    else if (x==3)
    cout<< "Being underweight can be influenced by stress, anxiety, depression, and/or eating disorders\n"
    else if (x==4)
    cout<< "A main cause of being underweight is malnutrition\n"
}

void normalweight(){
    int x;
    srand(time(NULL))
    x=rand()%4
    cout << "normalweight";
    cout<<"Random Fact: ";
    if (x==0)
    cout<<"Maintaining a healthy weight can lower the risk of heart disease, stroke, diabetes, high blood pressure, and many different type cancers.\n"
    else if (x==1)
    cout<<"Having a normal/healthy body weight more efficiently circulates your blood.\n"
    else if (x==2)
    cout<<"Your fluid levels are more easily managed.\n"
    else if (x==3)
    cout<<"You are less likely to develop diabetes, heart disease, certain cancers, gallstones, osteoarthritis, breathing problems and sleep apnea.\n"
}

void overweight(){
    int x;
    srand(time(NULL))
    x=rand()%3
    cout << "overweight\n";
    cout<<"Random Fact: ";
    if (x==0)
    cout<<" more than 1 in 3 adults were considered to be overweight"
    else if (x==1)
    cout<<"Men are more likely than women to be overweight."
    else if (x==2)
    cout<<"more than 2 in 3 adults were considered to be overweight or have obesity"
}

void obese(){
    int x;
    srand(time(NULL))
    x=rand()%4
    cout << "obese";
    cout<<"Random Fact: ";
    if (x==0)
    cout<<"Obesity-related conditions include heart disease, stroke, type 2 diabetes and certain types of cancer. These are among the leading causes of preventable, premature death.\n"
    else if (x==1)
    cout<<"Worldwide obesity has nearly tripled since 1975.\n"
    else if (x==2)    
    cout<<"Obesity is preventable.\n"
    else if (x==3)
    cout<<"39 million children under the age of 5 were overweight or obese in 2020."
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

