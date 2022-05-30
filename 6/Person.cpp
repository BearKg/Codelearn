#include "Book.cpp"

class Person {
    private:
        string name;
        int age;
        string add;
        vector<Book> vb;
    public:
        Person() {}
        Person(string name, int age, string add, vector<Book> vb) : name(name), age(age), add(add), vb(vb) {}
        
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        string getAdd() {
            return add;
        }
        vector<Book> getVB() {
            return vb;
        }

        virtual long moneyPay() = 0;
        virtual void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Add: " << add << endl;
            cout << "List Book Borrowed:" << endl;
            for (int i = 0; i < vb.size(); i++) {
                vb[i].display();
            }
            cout << "Money Pay: " << moneyPay() << endl; 
	    }
        
        static void sortPersonAge(vector<Person*> &vt) {
            for(int i = 0; i < vt.size() - 1; i++)
                for(int j = i + 1; j < vt.size(); j++) 
                    if(vt[i]->getAge() > vt[j]->getAge())
                        swap(vt[i], vt[j]);
        }
        static vector<int> getListAge(vector<Person*> vt) {
            vector<int> listAge;
            int k = 0;
            for(int i = 0; i < vt.size(); i++) {
                listAge.push_back(vt[i]->getAge());
            }
            for(int i = 0; i < listAge.size() - 1; i++) 
                for(int j = i + 1; j < listAge.size(); j++)
                    if(listAge[i] = listAge[j])
                        listAge.erase(j);
            return listAge;
        }
    
};