#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
    string teaname;
    int servings;
    public:
    Chai(string name, int serve):teaname(name), servings(serve){}
    friend bool compareServings(const Chai &chai1, const Chai &chai2);

    void display() const{
        cout << "tea Name:" << teaname <<endl; 
    }
};
bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}
int main(){
    Chai masalatea("Masala Tea", 7);
    Chai blacktea("Black Tea", 14);

    masalatea.display();
    blacktea.display();

    if(compareServings(masalatea,blacktea)){
        cout << "Masalatea has more servings!" << endl;
    }else{
        cout << "Masalatea has less servings!" << endl;

    }
}