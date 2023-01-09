//
//  main.cpp
//  Meter Converter
//
//  Created by Christian Fuller on 10/18/22.
//

#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float meter,feet;
    string conversionsMenu;
    string askAgain;
    bool isValid = false;
    
    cout << "Feet and Meter Converter \n \nConversions Menu:\na. Feet to Meters\nb. Meters to Feet\n";
    do {
        cout << "Enter conversion (a/b): ";
        cin >> conversionsMenu;
        if (conversionsMenu == "a"){
            isValid = true;
            cout << "\nEnter feet: ";
            cin >> feet;
            meter = feet / 3.2808399;
            cout << fixed << setprecision(2) << meter;
            cout << " meters\n";
            cout << "\nContinue? (yes/no): ";
            cin >> askAgain;
        }
        if (conversionsMenu == "b"){
            isValid = true;
            cout << "\nEnter meter: ";
            cin >> meter;
            feet = meter / 0.3048;
            cout << fixed << setprecision(2) << feet;
            cout << " feet\n";
            cout << "\nContinue? (yes/no): ";
            cin >> askAgain;
        } if (askAgain == "yes"){
            isValid = false;
            continue;
        } else if (askAgain == "no"){
            isValid = true;
            cout << "\nThanks, bye!\n\n";
        }
    } while (!(isValid));

        return 0;
    }
