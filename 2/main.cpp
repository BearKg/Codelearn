#include <iostream>
#include "Triangle.cpp"
using namespace std;

int main() {
    Point A(6,9);
    Point B(3,5);
    Point C = A - B;
    cout << "Abscissa of C: " << C.getX() << endl;
    cout << "Ordinate of C: " << C.getY() << endl;
    Triangle *tri = new Triangle(A, B, C);
    if(tri->isTriangle()) {
        cout << "Area of Triangle: " << tri->area() << endl;
        cout << "Perimeter of Triangle: " << tri->perimeter() << endl;; 
        cout << "Abscissa Center of Triangle:  " << tri->center().getX() << endl; 
        cout << "Ordinate Center of Triangle:  " << tri->center().getY() << endl;;
    }
}