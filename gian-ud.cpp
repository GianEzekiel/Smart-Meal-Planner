#include <ctime>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

double result;
string bmiResult;
float menBMR;
float womenBMR;

struct meals {
    string name;
    int calr;
    float protn;
} set[75];

void predefmeals() {
    // breakfast[0-24]
    set[0] = {"Veggie Omelette", 275, 18};
    set[1] = {"Greek Yogurt Parfait", 275, 18};
    set[2] = {"Avocado Toast", 175, 8};
    set[3] = {"Overnight Chia Pudding", 175, 8};
    set[4] = {"Smoothie Bowl", 275, 13};
    set[5] = {"Whole Grain Cereal", 175, 7};
    set[6] = {"Egg and Veggie Wrap", 275, 18};
    set[7] = {"Banana Pancakes", 250, 13};
    set[8] = {"Cottage Cheese with Fruit", 175, 13};
    set[9] = {"Breakfast Burrito", 325, 23};
    set[10] = {"Quinoa Breakfast Bowl", 250, 13};
    set[11] = {"Apple Cinnamon Oatmeal", 225, 7};
    set[12] = {"Veggie Breakfast Wrap", 275, 13};
    set[13] = {"Protein Smoothie", 225, 17};
    set[14] = {"Breakfast Quiche", 150, 18};
    set[15] = {"Peanut Butter Banana Toast", 275, 8};
    set[16] = {"Green Breakfast Bowl", 225, 13};
    set[17] = {"Tofu Scramble", 250, 18};
    set[18] = {"Sweet Potato Hash", 275, 8};
    set[19] = {"Smoked Salmon Toast", 350, 18};

    // lunch[25-49]
    set[25] = {"Teriyaki Grilled Eggplant", 163, 4};
    set[26] = {"Grilled Pork Tenderloin", 210, 24};
    set[27] = {"Taco Soup", 163, 15};
    set[28] = {"Skillet Egg Frittata", 304, 25};
    set[29] = {"Mexican-Spiced Grilled Chicken with Nectarine Salsa", 351, 37.2};
    set[30] = {"Vegan Grain Bowl Pesto", 480, 20};
    set[31] = {"Paleo & Whole30 Sesame Chicken", 432, 29};
    set[32] = {"Sheet Pan Honey Lemon Salmon", 758, 43};
    set[33] = {"White Chicken Chili", 383, 33};
    set[34] = {"Asian Chicken Quinoa Bowl with Almond Butter Sauce", 55, 34};
    set[35] = {"Thai Tofu Collard Wraps", 284, 13};
    set[36] = {"Chicken Cobb Salad", 407, 32};
    set[37] = {"Cheesy Seafood Bake", 511, 49};
    set[38] = {"Scrambled Egg & Feta Hash", 485, 32};
    set[39] = {"Spicy Fish Stew", 664, 42};
    set[40] = {"Chicken Satay Salad", 353, 38};
    set[41] = {"Spicy Cajun Chicken Quinoa", 386, 47};
    set[42] = {"BLT Pasta Salad", 386, 18};
    set[43] = {"Halloumi, Carrot, and Orange Salad", 338, 16};
    set[44] = {"Taco Salad", 450, 25};
    set[45] = {"Vegan Chickpea Curry Jacket Potatoes", 276, 12};
    set[46] = {"Salmon Meal Prep with Veggies", 806, 54};
    set[47] = {"Pesto Grilled Cheese", 781, 34};
    set[48] = {"Peanut Chicken Wrap", 648, 33.6};
    set[49] = {"Chicken Shawarma Salad", 844, 50};

    // dinner[50-74]
    set[50] = {"Chicken and vegetable stir-fry", 350, 30};
    set[51] = {"Salmon and roasted vegetables", 400, 35};
    set[52] = {"Spaghetti bolognese", 450, 25};
    set[53] = {"Vegetable curry with rice", 300, 15};
    set[54] = {"Grilled cheese sandwich and tomato soup", 500, 20};
    set[55] = {"Beef and broccoli", 350, 30};
    set[56] = {"Greek salad with chicken", 400, 30};
    set[57] = {"Taco salad", 450, 25};
    set[58] = {"Roasted chicken and vegetables", 500, 35};
    set[59] = {"Vegetable lasagna", 400, 20};
    set[60] = {"Ham and cheese quiche", 450, 25};
    set[61] = {"Thai chicken noodle soup", 350, 25};
    set[62] = {"Turkey burger with sweet potato fries", 500, 30};
    set[63] = {"Mushroom risotto", 400, 15};
    set[64] = {"Pizza", 450, 20};
    set[65] = {"Chicken and vegetable soup", 250, 25};
    set[66] = {"Shrimp and zucchini noodles", 300, 25};
    set[67] = {"Tofu and vegetable stir-fry", 300, 20};
    set[68] = {"Turkey and vegetable wrap", 350, 25};
    set[69] = {"Chicken and avocado salad", 350, 30};
    set[70] = {"Egg and vegetable scramble", 250, 20};
    set[71] = {"Lentil and vegetable stew", 300, 15};
    set[72] = {"Chicken and vegetable skewers", 250, 25};
    set[73] = {"Vegetable sushi", 300, 10};
    set[74] = {"Cauliflower pizza", 250, 15};
}

class Info {
public:
    string name;
    int age;
    char sex;
    float weight;
    float height;
    string units;
    string mass;

    Info(string n, int a, char s, float w, float h, string u, string m)
        : name(n), age(a), sex(s), weight(w), height(h), units(u), mass(m) {}
};

void weightloss(float weight, float height, int age, char sex) {
    cout << "Here is the function for weight loss." << endl;
    if (sex == 'M' || sex == 'm') {
        menBMR = 88 + (13 * weight) + (5 * height) - (6 * age);
        int gainweight = menBMR - 400;

        cout << "Your recommended calorie maintenance is " << menBMR << endl;
        cout << "If you want to gain weight slowly and steadily, aim for 300–500 calories more than you burn each day. If you want to gain weight fast, aim for around 700–1,000 calories above your maintenance level." << endl;

        cout << "Here is the recommended meal." << endl;
        srand(time(0)); // Seed the random number generator with current time

        for (int i = 0; i < 7; i++) {
            int totalCalorie = 0;

            // Generate random indices for breakfast, lunch, and dinner
            int breakfastIndex = rand() % 20;
            int lunchIndex = rand() % 20 + 25;
            int dinnerIndex = rand() % 20 + 50;

            // Retrieve the randomly selected meals
            meals breakfast = set[breakfastIndex];
            meals lunch = set[lunchIndex];
            meals dinner = set[dinnerIndex];

            // Calculate the total calorie count
            totalCalorie = breakfast.calr + lunch.calr + dinner.calr;

            if (totalCalorie <= gainweight) {
                cout << "Week " << (i + 1) << endl;
                cout << "Breakfast: " << breakfast.name << endl;
                cout << "Lunch: " << lunch.name << endl;
                cout << "Dinner: " << dinner.name << endl;
                cout << "Total Calorie = " << totalCalorie << endl;
                cout << endl;
            }else {
                i--;
            }
        }
    } else if (sex == 'F' || sex == 'f') {
        menBMR = 448 + (9 * weight) + (3 * height) - (4 * age);
        int gainweight = menBMR - 400;

        cout << "Your recommended calorie maintenance is " << menBMR << endl;
        cout << "If you want to gain weight slowly and steadily, aim for 300–500 calories more than you burn each day. If you want to gain weight fast, aim for around 700–1,000 calories above your maintenance level." << endl;

        cout << "Here is the recommended meal." << endl;
        srand(time(0)); // Seed the random number generator with current time

        for (int i = 0; i < 7; i++) {
            int totalCalorie = 0;

            // Generate random indices for breakfast, lunch, and dinner
            int breakfastIndex = rand() % 20;
            int lunchIndex = rand() % 20 + 25;
            int dinnerIndex = rand() % 20 + 50;

            // Retrieve the randomly selected meals
            meals breakfast = set[breakfastIndex];
            meals lunch = set[lunchIndex];
            meals dinner = set[dinnerIndex];

            // Calculate the total calorie count
            totalCalorie = breakfast.calr + lunch.calr + dinner.calr;

            if (totalCalorie <= gainweight) {
                cout << "Week " << (i + 1) << endl;
                cout << "Breakfast: " << breakfast.name << endl;
                cout << "Lunch: " << lunch.name << endl;
                cout << "Dinner: " << dinner.name << endl;
                cout << "Total Calorie = " << totalCalorie << endl;
                cout << endl;
            }else {
                i--;
            }
        }
    }
}

void buffMeUp() {
    cout << "Here is the function for gaining muscles." << endl;
}


void weightgain(float weight, float height, int age, char sex) {
    if (sex == 'M' || sex == 'm') {
        menBMR = 88 + (13 * weight) + (5 * height) - (6 * age);
        int gainweight = menBMR + 400;

        cout << "Your recommended calorie maintenance is " << menBMR << endl;
        cout << "If you want to gain weight slowly and steadily, aim for 300–500 calories more than you burn each day. If you want to gain weight fast, aim for around 700–1,000 calories above your maintenance level." << endl;

        cout << "Here is the recommended meal." << endl;
        srand(time(0)); // Seed the random number generator with current time

        for (int i = 0; i < 7; i++) {
            int totalCalorie = 0;

            // Generate random indices for breakfast, lunch, and dinner
            int breakfastIndex = rand() % 20;
            int lunchIndex = rand() % 20 + 25;
            int dinnerIndex = rand() % 20 + 50;

            // Retrieve the randomly selected meals
            meals breakfast = set[breakfastIndex];
            meals lunch = set[lunchIndex];
            meals dinner = set[dinnerIndex];

            // Calculate the total calorie count
            totalCalorie = breakfast.calr + lunch.calr + dinner.calr;

            if (totalCalorie <= gainweight) {
                cout << "Week " << (i + 1) << endl;
                cout << "Breakfast: " << breakfast.name << endl;

                if (lunch.calr <= 350) {
                    cout << "Lunch: 2 servings of " << lunch.name << endl;
                    totalCalorie += 2 * lunch.calr;
                } else {
                    cout << "Lunch: " << lunch.name << endl;
                    totalCalorie += lunch.calr;
                }

                if (dinner.calr <= 350) {
                    cout << "Dinner: 2 servings of " << dinner.name << endl;
                    totalCalorie += 2 * dinner.calr;
                } else {
                    cout << "Dinner: " << dinner.name << endl;
                    totalCalorie += dinner.calr;
                }

                cout << "Total Calorie = " << totalCalorie << endl;
                cout << endl;
            }else {
                i--;
            }
        }
    } else if (sex == 'F' || sex == 'f') {
        menBMR = 448 + (9 * weight) + (3 * height) - (4 * age);
        int gainweight = menBMR + 400;
        cout << "Your recommended calorie maintenance is " << menBMR << endl;
        cout << "If you want to gain weight slowly and steadily, aim for 300–500 calories more than you burn each day. If you want to gain weight fast, aim for around 700–1,000 calories above your maintenance level." << endl;

        cout << "Here is the recommended meal." << endl;
        srand(time(0)); // Seed the random number generator with current time

        for (int i = 0; i < 7; i++) {
            int totalCalorie = 0;

            // Generate random indices for breakfast, lunch, and dinner
            int breakfastIndex = rand() % 20;
            int lunchIndex = rand() % 20 + 25;
            int dinnerIndex = rand() % 20 + 50;

            // Retrieve the randomly selected meals
            meals breakfast = set[breakfastIndex];
            meals lunch = set[lunchIndex];
            meals dinner = set[dinnerIndex];

            // Calculate the total calorie count
            totalCalorie = breakfast.calr + lunch.calr + dinner.calr;

            if (totalCalorie <= gainweight) {
                cout << "Week " << (i + 1) << endl;
                cout << "Breakfast: " << breakfast.name << endl;

                if (lunch.calr <= 350) {
                    cout << "Lunch: 2 servings of " << lunch.name << endl;
                    totalCalorie += 2 * lunch.calr;
                } else {
                    cout << "Lunch: " << lunch.name << endl;
                    totalCalorie += lunch.calr;
                }

                if (dinner.calr <= 350) {
                    cout << "Dinner: 2 servings of " << dinner.name << endl;
                    totalCalorie += 2 * dinner.calr;
                } else {
                    cout << "Dinner: " << dinner.name << endl;
                    totalCalorie += dinner.calr;
                }

                cout << "Total Calorie = " << totalCalorie << endl;
                cout << endl;
            }else {
                i--;
            }
        }
    }
}

void underweight() {
    cout << "Underweight." << endl;
    int x;
    srand(time(NULL));
    x = rand() % 5;
    cout << "Random Fact: ";
    if (x == 0)
        cout << "Being underweight may be a symptom of other conditions like cancer, tuberculosis, and hyperthyroidism." << endl;
    else if (x == 1)
        cout << "Being underweight weakens the immune system, and for females, it causes issues with their menstruation and pregnancies, as well as increases the risk of infertility." << endl;
    else if (x == 2)
        cout << "8.8% of men and 9.7% women in the world are underweight." << endl;
    else if (x == 3)
        cout << "Being underweight can be influenced by stress, anxiety, depression, and/or eating disorders." << endl;
    else if (x == 4)
        cout << "A main cause of being underweight is malnutrition." << endl;
}

void normalweight() {
    int x;
    srand(time(NULL));
    x = rand() % 4;
    cout << "Normal weight." << endl;
    cout << "Random Fact: ";
    if (x == 0) {
        cout << "Maintaining a healthy weight can lower the risk of heart disease, stroke, diabetes, high blood pressure, and many different types of cancers." << endl;
    } else if (x == 1) {
        cout << "Having a normal/healthy body weight more efficiently circulates your blood." << endl;
    } else if (x == 2) {
        cout << "Your fluid levels are more easily managed." << endl;
    } else if (x == 3) {
        cout << "You are less likely to develop diabetes, heart disease, certain cancers, gallstones, osteoarthritis, breathing problems, and sleep apnea." << endl;
    }
}

void overweight() {
    int x;
    srand(time(NULL));
    x = rand() % 3;
    cout << "Overweight." << endl;
    cout << "Random Fact: ";
    if (x == 0)
        cout << "More than 1 in 3 adults are considered to be overweight." << endl;
    else if (x == 1)
        cout << "Men are more likely than women to be overweight." << endl;
    else if (x == 2)
        cout << "More than 2 in 3 adults are considered to be overweight or have obesity." << endl;
}

void obese() {
    int x;
    srand(time(NULL));
    x = rand() % 4;
    cout << "Obese." << endl;
    cout << "Random Fact: ";
    if (x == 0) {
        cout << "Obesity-related conditions include heart disease, stroke, type 2 diabetes, and certain types of cancer. These are among the leading causes of preventable, premature death." << endl;
    } else if (x == 1) {
        cout << "Worldwide obesity has nearly tripled since 1975." << endl;
    } else if (x == 2) {
        cout << "Obesity is preventable." << endl;
    } else if (x == 3) {
        cout << "39 million children under the age of 5 were overweight or obese in 2020." << endl;
    }
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

    string name, units;
    int age;
    char sex;
    float weight, height;

    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your sex [M/F]: ";
    cin >> sex;
    cout << "Enter your Height: ";
    cin >> height;
    cout << "Enter the unit of height [cm/m]: ";
    cin >> units;
    cout << "Enter your Weight: ";
    cin >> weight;

    Info user(name, age, sex, weight, height, units, "");
    bmi(user.height, user.weight, user.units);

    cout << endl << endl;
    cout << "========================================================================" << endl;
    cout << "\t[1] Weight Loss" << endl;
    cout << "\t[2] Gain Muscles" << endl;
    cout << "\t[3] Gain Weight" << endl;
    cout << "Your Choice: ";
    cin >> choice;

    // Call predefmeals() to initialize the set array with meals
    predefmeals();

    if (choice == 1) {
        weightloss(user.weight, user.height, user.age, user.sex);
    } else if (choice == 2) {
        buffMeUp();
    } else if (choice == 3) {
        weightgain(user.weight, user.height, user.age, user.sex);
    }

    return 0;
}
