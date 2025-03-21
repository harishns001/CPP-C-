#include<iostream>
#include<vector>

using namespace std;

class Chai{
public:
    string teaname;
    int servings;
    vector<string> ingredients;
    //default constructor
    Chai(string name, int serve, vector<string> ingr){
        teaname = name;
        servings = serve;
        ingredients =ingr;
        cout << "Parameter constructor called\n";
    }
    void displaydetails(){
        cout << "Tea name: " << teaname <<endl;
        cout << "Servings: " << servings <<endl;
        cout << "Ingredients: ";
        for(string ingredient : ingredients){
            cout << ingredient << "";
        }
        cout << endl;

    }
};

int main(){
    Chai lemontea("black tea", 2, {"water"," tea powder", " cardamom"});
    lemontea.displaydetails();
    return 0;
}