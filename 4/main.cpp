#include "ScoreSocial.cpp"
#include "ScoreNatural.cpp"

using namespace std;

int main(int argc, char*argv[]) {
    Score* s[6];
    s[0] = new ScoreNatural(5,5,5,5,5,5);
    s[1] = new ScoreSocial(4,4,4,4,4,4);
    s[2] = new ScoreNatural(6,6,6,6,6,6);
    s[3] = new ScoreSocial(7,7,7,7,7,7);
    s[4] = new ScoreNatural(8,8,8,8,8,8);
    s[5] = new ScoreNatural(9,9,9,9,9,9);
    
    vector<Score*> vt;
    for(int i=0; i < 6; i++) {
        vt.push_back(s[i]);
    }

    cout <<"Max average: " << Score::getMaxAvg(vt) << endl;
    for(int i=0; i < 6; i++) {
        cout << "vt[" << i << "]" << vt[i]->avgPoint() << endl;
    }
}