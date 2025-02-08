#include <iostream>
using namespace std;
int main()
{
    int choice, side, sq, rect, circle;
    cout << "Enter choice to calculate area:\n 1 for Square \n 2 for Rectangle \n 3 for circle" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int side;
        cout << "Enter side of square: " << endl;
        cin >> side;
        sq = side * side;
        cout << "Area of sqaure: " << sq << endl;
        break;
    case 2:
        int l, b;
        cout << "Enter lenght and breadth: " << endl;
        cin >> l >> b;
        rect = l * b;
        cout << "Area of rectangle: " << rect << endl;
        break;
    case 3:
        int radius;
        cout << "Enter radius: " << endl;
        cin >> radius;
        circle = (3.14) * radius * radius;
        cout << "Area of circle: " << circle << endl;
        break;
    default:
        cout << "Enter a valid choice." << endl;
        break;
    }
    return 0;
}