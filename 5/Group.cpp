#pragma once
#include <iostream>
#include <vector>
#include "Family.cpp"

using namespace std;

class Group {
    private:
        string nameGr;
        vector<Family> f;
    public:
        Group() {}
        Group(string nameGr, vector<Family> f) {
            this->nameGr = nameGr;
            this->f = f; 
        }

        void display() {
            cout << "Name Group " << nameGr << endl;
            for (int i = 0; i < f.size(); i++) {
                f[i].display();
            }
	    }

        string getNameGr() {
            return nameGr;
        }

        vector<Family> getF() {
            return f;
        }

        int getNumberFamily() {
            return f.size();
        }

        static double avgAgeGroup(Group v) {
            double count = 0;
            double n = 0;
            vector<Family> F(v.getF());
            for(int i = 0; i < F.size(); i++) {
                vector<People> P(F[i].getP());

                for(int j = 0; j < P.size(); j++) {
                    count += P[j].getAge();
                }
                n += P.size();
            }
            return count / n;
        }


        static vector<People> getPeopleHaveNotJob(Group G) {
            vector<People> p;
            vector<Family> F(G.getF());
            for(int i = 0; i < F.size(); i++) {
                vector<People> P(F[i].getP()) ;
                for(int j = 0; j < P.size(); j++) {
                    if(P[j].getJob() == "") {
                        p.push_back(P[j]);
                    }
                }
            }
            return p;
        }
};