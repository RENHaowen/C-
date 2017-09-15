//
//  main.cpp
//  4.5 4.6 4.9
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string mark;
    float weight;
    int calori;
};

int main()
{
    //CandyBar snack
    //{
        //"Mocha Munch",
       // 2.3,
        //350
        
    //};
    
    //cout << snack.mark << endl;
    //cout << snack.weight << endl;
    //cout << snack.calori << endl;
    
    //CandyBar candy[3];
    CandyBar *p_candy = new CandyBar [3];
    
    * p_candy={"A", 1.2, 23};
    * (p_candy + 1 ) ={"AB", 2.3, 34};
    * (p_candy + 2 )={"ABC", 3.4, 45};
    //int i=0;
    for (int i = 0; i < 3; i++) {
        cout << p_candy->mark << endl;
        cout << p_candy->weight << endl;
        cout << p_candy->calori << endl;
        p_candy = p_candy +1;
        cout << endl;
    }
}
