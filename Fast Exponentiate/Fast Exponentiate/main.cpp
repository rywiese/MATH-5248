//
//  main.cpp
//  Fast Exponentiate
//
//  Created by Ry Wiese on 11/2/16.
//  Copyright © 2016 TheProSteezeBroskis. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
int fastExpo(int b, int e);

int main() {
    
    int b, e, m;
    cout << "Enter a base:" << endl;
    cin >> b;
    cout << "Enter an exponent:" << endl;
    cin >> e;
    cout << "Enter a modulus:" << endl;
    cin >> m;
    
    int x = 1;
    int r = b;
    while(x <= e)
    {
        r = r % m;
        cout << b << "^" << x << " = " << r << endl;
        r = static_cast<int>(pow(r, 2));
        x *= 2;
    }
    return 0;
}

int fastExpo(int b, int e)
{
    int x;
    
    return x;
}