#include <iostream>

int main() {

    double height, weight, bmi;

    // Ask user for their height

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    // Now ask the user for their weight and calculate BMI

    std::cout << "Type in your weight (kg) ";
    std::cin >> weight;


    bmi = weight/(height*2);

    std::cout << "BMI is " << bmi << "\n";



    return 0;

}