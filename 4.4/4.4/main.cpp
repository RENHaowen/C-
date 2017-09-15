//
//  main.cpp
//  4.4
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#include "cstring"

int main()
{
    string first_name;
    string last_name;
    
    cout << "Enter your first name: ";
    getline(cin, first_name);
    
    cout << "Enter your last name: ";
    getline( cin, last_name);
    
    string name;
    string point;
    point = ", ";
    name = last_name + point +first_name;
    cout << "Here's the information in a single string: " << name << endl;
    
    return 0;
    
}
