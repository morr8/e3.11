/*
 • E3.11
 The boiling point of water drops by about one degree centigrade for every 300 meters (or 1,000 feet) of altitude. Improve the program of Exercise • E3.10 to allow the user to supply the altitude in meters or feet.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter temperature in celsius or fahrenheit (example 12 c): ";
    float temp;
    string tempSuffix;
    cin >> temp >> tempSuffix;
    cout << "enter altitude in meters or feet (example 1,000 ft or 300 m): ";
    float alt;
    string altSuffix;
    cin >> alt >> altSuffix;
    
    if (altSuffix == "ft")
    {
        temp = temp + (alt / 1000);
    }
    else
    {
        temp = temp + (alt / 300);
    }
    
    if (tempSuffix == "f")
        {
        if (temp <= 32)
        {
            cout << "solid";
        }
        else if (temp < 212)
        {
            cout << "liquid";
        }
        else
        {
            cout << "gaseous";
        }
    }
    else
    {
        if (temp <= 0)
        {
            cout << "solid";
        }
        else if ( temp < 100)
        {
            cout << "liquid";
        }
        else
        {
            cout << "gaseous";
        }
    }
    cout << endl;
}
