#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Point {
    public:
        int x;
        int y;
        Point() {}
        Point(int x, int y) : x(x), y(y) {}
        void setX(int x) {
            this->x = x;
        } 
        
        int getX() {
            return x;
        }
        
        void setY(int y) {
            this->y = y;
        } 
        
        int getY() {
            return y;
        }
        
        friend Point operator - (Point A, Point B) {
            Point C(A.x - B.x, A.y - B.y) ;
            return C;
        }
        
        double distance(Point B) {
            return sqrt((this->x - B.x) * (this->x - B.x) + (this->y - B.y) * (this->y - B.y));
        }
        
                
};