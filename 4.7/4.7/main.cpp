//
//  main.cpp
//  4.7 4.8
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include "string"
using namespace std;

struct pizza
{
    string name_of_company;
    double diameter;
    double weight;
};

int main()
{
    //pizza new_pizaa;
    pizza *pt = new pizza;
    
    cout << "Enter the company of new pizza: ";
    //getline(cin,new_pizaa.name_of_company);
    getline(cin, pt->name_of_company);
    
    cout << "Enter the diameter od the new pizza: ";
    //cin >> new_pizaa.diameter;
    cin >> pt->diameter;
    
    cout << "Enter the weight of the new pizza: ";
    cin.get();//*****
    cin >> pt->weight;
    
    cout << "OK, new pizza is made by " << pt->name_of_company << endl;
    cout << "It has " << pt->diameter << "cm large." << endl;
    cout << "And it weights " << pt->weight << "kg." << endl;
    
    return 0;
    
}

