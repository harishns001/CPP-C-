// c1 : while loop
//  write a program that keeps track of tea oders. Each time a cup of tea is made decrease the number of cups remaining. The loop should run until all cups are served.

#include<iostream>

using namespace std;

int main(){
int cups;
cout << "how many tea cups you want?"<< endl;
cin >> cups;
while(cups > 0){
    cout << "tea cup " << cups << " is served"<< endl;
    cups--;
}
cout << "all the tea cups were served"<< endl;

}
// c2: Do - while loop
// create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-sensitive, using a do-while loop.

#include<iostream>

using namespace std;

int main(){
int ncups= 1;
string cups;
do{
    cout << "I will be serving tea continously until you type stop"<< endl;
    cout << "i am serving tea cup " << ncups <<endl;
    cin >> cups;
    ncups++;
}while(cups != "stop");
}
// c3 : for loop
// write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.


#include<iostream>

using namespace std;

int main(){
int cups;
cout <<"how many cups of tea you want" << endl;
cin >> cups;
for(int i=1; i<= cups; i++){
    cout <<"Brewing cup " << i << " of tea" << endl;
}
}

// c4: Break keyword
// write a program that keeps serving tea until the user says they have had enough(input 'stop') . Use a break statement to exit the loop when the user types 'stop'.

#include<iostream>

using namespace std;

int main(){
string cups;

for(int i=1; i<= 10; i++){
    cout <<"do you want one more tea, type (yes/no)" << endl;
    cin >> cups;
    if(cups == "no" || cups == "No"){
        break;
    }
    else{
    cout <<"Brewing cup " << i << " of tea" << endl;
}
}
}

// c5: Continue keyword 
// write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.

#include<iostream>

using namespace std;

int main(){
string cups[5] = {"Black tea", "Lemon tea", "Green tea", "Brown tea","Oolong tea"};

for(int i=0; i<= 5; i++){
    if(cups[i]== "Green tea"){
        continue;
    }
    cout <<"Brewing cup of " << cups[i] << "..." << endl;
}
}

// c6: Nested loops
// write a program that brews multiple cups of different types of tea. For each type , brew 3 cups using a nesrted loop.

#include<iostream>

using namespace std;

int main(){
string cups[5] = {"Black tea", "Lemon tea", "Green tea", "Brown tea","Oolong tea"};

for(int i=0; i<= 5; i++){
    cout << cups[i] << endl;
    for(int k = 1; k<= 3; k++){
    cout <<"Brewing "<< k <<" cup of " << cups[i] <<"..."<< endl;
}
}
}
