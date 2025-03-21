#include<iostream>
#include<vector>

using namespace std;

class Chai{
public:
    string* teaname;
    int servings;
    vector<string> ingredients;
    //default constructor
    Chai(string name, int serve, vector<string> ingr){
        teaname = new string(name);
        servings = serve;
        ingredients =ingr;
        cout << "Parameter constructor called\n";
    }
    Chai(const Chai& name){
        teaname = new string(*name.teaname);
        servings = name.servings;
        ingredients = name.ingredients;
        cout << "COPY Parameter constructor called\n";

    }
    ~Chai(){
        delete teaname;
        cout << "Destructor called" << endl;
    }
    void displaydetails(){
        cout << "Tea name: " << *teaname <<endl;
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

    Chai copied = lemontea;
    copied.displaydetails();

    *lemontea.teaname = "Modified black tea";

    cout << "Lemon Tea--------" <<endl;
    lemontea.displaydetails();
    cout << "Copied Tea-----------\n"; 
    copied.displaydetails();


    return 0;
}