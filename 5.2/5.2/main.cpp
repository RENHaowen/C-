//
//  main.cpp
//  5.2
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>
using namespace std;

const int ArSize = 101;

int main()
{
    array<long double, ArSize> factorials;
    
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i<= ArSize; i++)
    {
        factorials[i] = i * factorials[i-1];
    }
    for (int i = 0; i< 16; i++)
        cout << i << "! = " << factorials[i] << endl;
    
    cout << "100! = " << factorials[100] << endl;
    
    return 0;
    
}
