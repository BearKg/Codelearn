#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Score {
    protected:
        double math;
        double literature;
        double english;
    public:
        Score() {
            
        }
        
        Score(double math, double literature, double english) {
            this->math = math;
            this->literature = literature;
            this->english = english;
        }
        
        double getMath() {
            return math;
        }
        
        double getliterature() {
            return literature;
        }
        
        double getEnglish() {
            return english;
        }
        
        virtual double PointA() {
            return 0;
        }
        
        virtual double PointB() {
            return 0; 
        }
        
        virtual double PointC() {
            return 0;
        }
        
        virtual double PointD() {
            return math + literature + english;
        }
        
        virtual double avgPoint() = 0;
        static double getMaxAvg(vector<Score*> vt) {
            double max = vt[0]->avgPoint();
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i]->avgPoint() > max) 
                    max = vt[i]->avgPoint();
            }
            return max;
        }
        
        static double getMinAvg(vector<Score*> vt) {
            double min = vt[0]->avgPoint();
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i]->avgPoint() < min) 
                    min = vt[i]->avgPoint();
            }
            return min;
        }
        
        bool isPass() {
            if(avgPoint() > 5) 
                return true;
            else 
                return false;
            
        }
        
        static double getMaxPointA(vector<Score*> vt) {
            double max = vt[0]->PointA();
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i]->PointA() > max)
                    max = vt[i]->PointA();
            }
            return max;
        }

         static double getMaxPointB(vector<Score*> vt) {
            double max = vt[0]->PointB();
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i]->PointB() > max)
                    max = vt[i]->PointB();
            }
            return max;
        }

         static double getMaxPointC(vector<Score*> vt) {
            double max = vt[0]->PointC();
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i]->PointC() > max)
                    max = vt[i]->PointC();
            }
            return max;
        }

        static double getMaxPointD(vector<Score*> vt) {
            double max = vt[0]->PointD();
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i]->PointD() > max)
                    max = vt[i]->PointD();
            }
            return max;
        }
};