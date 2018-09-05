//
//  main.cpp
//  Mod Calculator
//
//  Created by Ry Wiese on 10/10/16.
//  Copyright © 2016 TheProSteezeBroskis. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, m;
    cout << "Please enter m:" << endl;
    cin >> m;
    cout << "Enter the first number:" << endl;
    cin >> x;
    
    while(true)
    {
        cout << "Times:" << endl;
        cin >> y;
        x = ((x*y) % m);
        
        
        cout << "Equals "<< x << endl << endl;
    }
    return 0;
}
