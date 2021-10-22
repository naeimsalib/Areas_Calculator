//Name: Naeim Salib
// CSC 211 Lab1


#include <iostream>


using namespace std;

void calculateAreaOfCircle();
void calculateAreaOfRectangle();
void calculateAreaOfTriangle();
void getUserInput(int user_input);

int main(int argc, const char * argv[]) {

    
    int user_input; // takes in User Input
    
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculatethe Areaof a Triangle" << endl;
    cout << "4. Quit" << endl;
    
    
    // A Do-While Loop to keep asking user for inputs, until they enter 4 to exit.
    do {
        cout << "Enter Your Choice (1-4): ";
       cin >> user_input;
        switch (user_input) {
            case 1:
                calculateAreaOfCircle();
                cout << endl;
                break;
            case 2:
                calculateAreaOfRectangle();
                cout << endl;
                break;
            case 3:
                calculateAreaOfTriangle();
                cout << endl;
                break;
                
            default:
               cout << "Invalid input, please choose a value from 1-4" << endl;
                break;
        }
    }while (user_input != 4);

    return 0;
}


// Function to calculate the area of a Circle.
void calculateAreaOfCircle(){
    double area;
    double radius;
    cout << "Please enter the radius of Circle ";
    cin >> radius;
    area = 3.14159 * pow(radius, 2);
    cout << "The area is " << area << endl;
}


// Function to calculate the area of a Rectangle.
void calculateAreaOfRectangle(){
    double area;
    double length,width;
    
    cout << "Please enter the lengh of Rectangle ";
    cin >> length;
    cout << "Please enter the width of Rectangle ";
    cin >> width;
    area = length * width;
    cout << "The area is " << area << endl;
}


// Function to calculate the area of a Triangle
void calculateAreaOfTriangle(){
    double area;
    double base,height;
    
    cout << "Please enter the length of the triangle's base:";
    cin >> base;
    cout << "please enter its height" ;
    cin >> height;
    area = base * height * 0.5;
    cout << "The area is " << area << endl;
}
