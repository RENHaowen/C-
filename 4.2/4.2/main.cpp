//
//  main.cpp
//  4.2
//
//  Created by RenHaowen on 2017/9/11.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include "cstring"
using namespace std;

int main()
{
    
    string name;
    string dessert;
    
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite desser: \n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ". \n";
    
    return 0;
    
    
    
}


