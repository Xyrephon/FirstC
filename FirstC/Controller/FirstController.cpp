//
//  FirstController.cpp
//  FirstC
//
//  Created by Tucker, Jonah on 1/23/17.
//  Copyright © 2017 Tucker, Jonah. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "I never used the forbidden words, don't worry about it." << endl;
    int myAge = 16;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "How old are you?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "Oh, so you are " << yourAge << " years old!" << endl;
    string myName;
    cin.ignore();
    cout << "Type in your name" << endl;
    getline(cin, myName);
    cout << "You typed: " << myName << endl;
    cout << "Type in your name and age." << endl;
    cin >> myName >> yourAge;
    cout << "You typed: " << myName << " and " << yourAge << endl;
}
