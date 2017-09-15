//
//  main.cpp
//  4.3
//
//  Created by RenHaowen on 2017/9/11.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;
#include "cstring"

int main()
{
    char first_name[20];
    char last_name[20];
    
    cout << "Enter your first name: ";
    cin.getline(first_name, 20);
    
    cout << "Enter your last name: ";
    cin.getline(last_name, 20);
    
    string name;
    string point;
    point = ", ";
    name = last_name + point +first_name;
    cout << "Here's the information in a single string: " << name << endl;
    
    return 0;
    
}
