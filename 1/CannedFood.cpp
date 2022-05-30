#include "Food.cpp"

class CannedFood: public Food {
    private:
        int numberBox;
    public:
        CannedFood() {
            
        }
        CannedFood(string name, double price, int numberBox): Food(name, price) {
            this->numberBox = numberBox;
        }
        void display() {
            cout << "Name: " << Food::getName() << endl;
            cout << "Price: " << Food::getPrice() << endl;
            cout << "Number box: " << this->numberBox << endl;
        }
        void setNumberBox(int numberBox) {
            this->numberBox = numberBox;
        }
        int getNumberBox() {
            return numberBox;
        }
        static void sortNumberBox(vector<CannedFood>& vt) {
            int k = 0;
                for(int i = 0; i < vt.size() - 1; i++) 
                    for(int j = i + 1; j < vt.size(); j++) {
                        if(vt[i].numberBox > vt[j].numberBox){
                            k = vt[i].numberBox;
                            vt[i].numberBox = vt[j].numberBox;
                            vt[j].numberBox = k;
                        }
                    }
        }
};