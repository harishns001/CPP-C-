#include<iostream>
#include<vector>

using namespace std;

class Chai{
public:
    string teaname;
    int servings;
    vector<string> ingredients;
    //default constructor
    Chai(){
        teaname = "Unkown tea";
        servings = 1;
        ingredients ={"water"," tea leaves"};
        cout << "constructor called\n";
    }
    void displaydetails(){
        cout << "Teaname:" << teaname <<endl;
        cout << "Servings:" << servings <<endl;
        cout << "Ingredients:";
        for(string ingredient : ingredients){
            cout << ingredient << "";
        }
        cout << endl;

    }
};

int main(){
    Chai defaultconst;
    defaultconst.displaydetails();
    return 0;
}