#include "Point.cpp"
class Triangle : public Point{
    private:
        Point A;
        Point B;
        Point C;
    public:
        Triangle() {}
        Triangle(Point A, Point B, Point C) : A(A), B(B), C(C) {}
        double perimeter() {
            return A.distance(B) + A.distance(C) + B.distance(C); 
        } 
        
        double area() {
            Point M = B - A;
            Point N = C - A;
            return 0.5 * abs(M.x * N.y - N.x * M.y) ;
        }
        
        Point center() {
            Point D((A.x + B.x + C.x)/3, (A.y+B.y+C.y)/3);
            return D;
        }
        
        bool isTriangle()
	{
		double a = A.distance(B);
		double b = B.distance(C);
		double c = C.distance(A);
		if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
		{
			return true;
		}
		return false;
	}
};