//
//  main.cpp
//  5.5 5.6
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string  months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept ","Oct", "Nov", "Dec"};
    int sales[3][12];
    int sum[3];
    
    int year=1;
    for (int i=0; i<3; i++,year++)
    {
        
        cout << "Enter the sales volum in every month in " << year << "ed year\n";
        for (int j=0; j<12; j++) {
            cout << months[j] << ": ";
            cin >> sales[i][j];
            sum[i] += sales[i][j];
        }
        
    }
    int SUM;
    for (int i=0; i<3; i++) {
        cout << "They has sold " << sum[i] << " books in the " << i+1 << "ed year.\n";
        SUM += sum[i];
    }
    cout << SUM << " books have been sold in this 3 years.\n";
    
    return 0;
}
