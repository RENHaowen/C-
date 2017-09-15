//
//  main.cpp
//  5.1
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nb_min, nb_max;
    
    cout << "Ehter two different numbers.\n";
    cout << "The small one: ";
    cin >> nb_min;
    cout << "The big one: ";
    cin >> nb_max;
    
    int sum=0;
    
    for ( int i = nb_min; i <= nb_max; i++)
    {
        sum += i;
    }
    cout << "The sum is: " << sum << endl;
    
    return 0;
    
}
