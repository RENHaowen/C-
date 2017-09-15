//
//  main.cpp
//  5.4
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    double argent_Da=100, argent_Cl=100;

    int year=0;
    for (int i=1 ; argent_Cl <= argent_Da; i++)
    {
        year ++;
        argent_Da += 0.1 * 100;
        argent_Cl = argent_Cl * 1.05;
    }
    
    cout << "After " << year << " years, Cleo has more money than Daphne." << endl;
    cout << "Cleo has " << argent_Cl << " dollors.\n";
    cout << "Daphne has " << argent_Da << " dollors.\n";
    
    return 0;
    
}
