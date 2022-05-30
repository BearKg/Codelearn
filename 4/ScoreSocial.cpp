#pragma once
#include "Score.cpp"

class ScoreSocial : public Score {
    private:
        double ce;
        double geography;
        double history;
    public:
        ScoreSocial() {

        }

        ScoreSocial(double math, double literature, double english, double ce, double geography, double history) : Score(math, literature, english) {
            this->ce = ce;
            this->geography = geography;
            this->history = history;        
        }

        double getCe() {
            return ce;
        }

        double getGeography() {
            return geography;
        }

        double getHistory() {
            return history;
        }

        double PointC() {
            return ce + geography + history;
        }

        double pointNatural() {
            return ce + geography + history;
        }
        double avgPoint() {
            return (literature + history + geography + math + literature + english)/6;
        }
};