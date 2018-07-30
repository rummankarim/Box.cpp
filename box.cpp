/*
 Rumman-Al-Karim
 CSI 136
 Lab 4A
 This programm asks the uyser for a width and height and prints out a box
 */


#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // variables
    int width, height;
    
    // user input
    cout <<"Enter a width: " << endl;
    cin >> width;
    
    cout << "Input height: " << endl;
    cin >> height;
    
    
    for (int row=0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            
            cout << "*";
            
        } // end of inner loop
        
        cout << endl;
    } // end of outer loop
    
    
    
    
    
    
    
    return 0;
    
}
