//
//  main.cpp
//  5.3
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;


int main()
{
    double numbers;
    
    cout << "Enter a number:(Enter 0 to stop) ";
    cin >> numbers;
    double sum = numbers;
    cout << "The sum of numbers is: " << sum << endl;
        
    while (numbers != 0)
    {
        cout << "Enter a number:(Enter 0 to stop) ";
        cin >> numbers;
        sum += numbers;
        cout << "The sum of numbers is: " << sum << endl;;
    }
    
    return 0;
    
}
