#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN
#include <vector>
using namespace std;

vector<double> convertTemperature(double c){
    double k = c + 273.15;
    double f = (c * 9.0/5.0) + 32.0;
    vector<double> v;
    v.push_back(k);
    v.push_back(c);
    return v;
}
int main (){
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    cout << "Temperature in Kelvin: " << convertTemperature(c)[0] << endl;
    cout << "Temperature in Fahrenheit: " << convertTemperature(c)[1] << endl;
}