//
//  main.cpp
//  5.10
//
//  Created by RenHaowen on 2017/9/11.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number of rows: ";
    int line;
    cin >> line;
    
    for (int i=1; i<=line; i++)
    {
        for(int j=line-i; j>0; j--)
        {
            cout << ".";
        }
        for(int k=0; k<i; k++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}
