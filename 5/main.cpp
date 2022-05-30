#include "People.cpp"
#include "Family.cpp"
#include "Group.cpp"
#include<vector>


int main(int argc,char*argv[]) {
    vector<People> p1;
    p1.push_back(People("Van", 19, "IT", "N01"));
    p1.push_back(People("Du", 22, "Vtuber", "N02"));
    p1.push_back(People("Mai", 17, "Vtuber", "N03"));
    p1.push_back(People("Tra", 19, "Vtuber", "N04"));

    vector<People> p2;
    p2.push_back(People("Max", 19, "IT", "N06"));
    p2.push_back(People("Jack", 22, "Vtuber", "N07"));
    p2.push_back(People("Sam", 17, "Vtuber", "N08"));
    p2.push_back(People("Linda", 19, "Vtuber", "N09"));

    vector<People> p3;
    p3.push_back(People("Mark", 19, "IT", "N010"));
    p3.push_back(People("Saibot", 22, "Ninja", "N011"));
    p3.push_back(People("Cyborg", 17, "Hero", "N012"));
    p3.push_back(People("Chika", 19, "Waifu", "N03"));
    
    vector<Family> f1;
    f1.push_back(Family("NoInfor", "HoChiMinh City", p1));
    f1.push_back(Family("poor", "New York City", p2));
    f1.push_back(Family("rich", "New York City", p3));

    vector<Family> poor1 = Family::getPoorHousehold(f1); 
    for(int i = 0; i < poor1.size(); i++) {
        poor1[i].display();
    }
    
}