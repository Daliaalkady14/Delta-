#include <iostream>
#include <string>

using namespace std;

int calculateIrrigationSchedule(string plantType) {
    if (plantType == "wheat") {
        return 7;
    } else if (plantType == "rice") {
        return 3;
    } else if (plantType == "corn") {
        return 5;
    } else {
        return 10;
    }
}

int calculateIdealTemperature(string soilType) {
    if (soilType == "clay") {
        return 25;
    } else if (soilType == "sand") {
        return 30;
    } else if (soilType == "loam") {
        return 27;
    } else {
        return 22;
    }
}

int main() {
    string soilType, plantType;
    double landArea;

    cout << "Enter soil type (clay, sand, loam): ";
    cin >> soilType;

    cout << "Enter plant type (wheat, rice, corn): ";
    cin >> plantType;

    cout << "Enter land area (in square meters): ";
    cin >> landArea;

    int irrigationSchedule = calculateIrrigationSchedule(plantType);
    int idealTemperature = calculateIdealTemperature(soilType);

    cout << "Irrigation should occur every " << irrigationSchedule << " days." << endl;
    cout << "The ideal temperature is " << idealTemperature << " degrees Celsius." << endl;

    return 0;
}