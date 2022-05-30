#pragma once
#include "Score.cpp"

class ScoreNatural : public Score {
    private:
        double physic;
        double chemistry;
        double biology;
    public:
        ScoreNatural() {

        }

        ScoreNatural(double math, double literature, double english, double physic, double chemistry, double biology) : Score(math, literature, english) {
            this->physic = physic;
            this->chemistry = chemistry;
            this->biology = biology;
        }

        double getPhysic() {
            return physic;
        }

        double getChemistry() {
            return chemistry;
        }

        double getBiology() {
            return biology;
        }

        double PointA() {
            return math + physic + chemistry;
        }

        double PointB() {
            return math + chemistry + biology;
        }

        double PointNatural() {
            return physic + biology + chemistry;
        }

        double avgPoint() {
            return (physic + chemistry + biology + math + literature + english)/6;
        }
};