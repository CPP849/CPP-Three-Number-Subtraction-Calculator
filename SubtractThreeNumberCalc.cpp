#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d;
    cout << "Welcome to the Three Number Subtraction Calculator!" << endl;
    cout << "What is the First Number?:" << endl;
    cin >> a;
    cout << "What is the Second Number?:" << endl;
    cin >> b;
    cout << "What is the Third Number:" << endl; 
    cin >> c;
    d = a - b - c;
    cout << "The answer is " << d << "." << endl;
    cout << "Thank you for trying out this program!" << endl;
}