// c1 : Arithematic operators
// Write a program that claculates the price of tea packs.A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to totalprice and display the final cost

// #include<iostream>

// using namespace std;
// int main(){
//     int price,packs;
//     float totalprice;
//     cout<< "how many tea packs do you want? " << endl;
//     cin >> packs;
//     cout << "what is the price of the pack?" <<endl;
//     cin >> price;
//     totalprice = price*packs;
//     totalprice += (price*0.1);
//     cout << "the totalprice is :" <<totalprice <<endl;
// }

// c2 : Assignmrnt operators
// create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.

// #include<iostream>

// using namespace std;
// int main(){
//     int price,packs;
//     float totalprice;
//     cout<< "how many tea packs do you want? " << endl;
//     cin >> packs;
//     if(packs < 20){
//         packs += 10;
//         cout << "The total number of tea bags are:" << packs << endl;
// }
// else{
//     cout << "The total number of tea bags are:" << packs << endl;
// }
//     }
    
// c3 : Relational and logical operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year.write a program that checks if the user qualifies for a discount based on their input. 

// #include<iostream>

// using namespace std;
// int main(){
//     int price,packs,visitcount;
//     float totalprice,discount;
//     cout<< "how many tea packs do you want? " << endl;
//     cin >> packs;
//     cout<< "what is the price of the pack? " << endl;
//     cin >> price;
//     cout << "Is it your first time or how long you are visiting here?" <<endl;
//     cin >> visitcount;
//     totalprice = price*packs;
//     if(packs > 12 || visitcount >= 12){
//         discount = totalprice-(totalprice*0.1);
//         cout << "you have unlocked the discount: " << discount << endl;
// }
// else{
//     cout << "you have not unlocked the discount:" << totalprice << endl;
// }
//     }

// c4 : Bitwise Operators
// Write a program tha uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer(1 for green, 2 for black, 4 for oolong). Allow the user to check availability by inputting the tea type (1,2, or 4) and display a message saying whether that tea is in stock or not.

#include<iostream>

using namespace std;
int main(){
    int green = 1,black, oolong;
    int stock = 5;
    int choice;
    cout << "to check availability enter (1<Green> or 2<Black> or 4<oolong>):" <<endl;
    cin >> choice;
    
    if(green == 1 || black == 2 || oolong == 4 ){
        if(choice & stock){
            cout << "The stock is available "<<endl;            
        }
        else{
            cout << "the stock is unavailable" << endl;
        }
        }
    else{
        cout << "please enter proper input" <<endl;
    
    }
    }