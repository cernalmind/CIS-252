/**
 * 6_17.cpp - (Random Numbers)
 *
 * Write a single statement that prints a number at random from each
 * of the following sets:
 *     a) 2, 4, 6, 8, 10.
 *     b) 3, 5, 7, 9, 11.
 *     c) 6, 10, 14, 18, 22.
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int output;

    for(int i = 0; i < 10; i++){
        cout << "---" << endl
             << " " << i << " " << endl
             << "---" << endl;

        // a) 2, 4, 6, 8, 10.
        output = ((rand() % 5) * 2) + 2;
        cout << output << endl;

        // b) 3, 5, 7, 9, 11.
        output = ((rand() % 5) * 2) + 3;
        cout << output << endl;

        // c) 6, 10, 14, 18, 22.
        output = ((rand() % 5) * 4) + 6;
        cout << output << endl;
    }

    return 0;
}