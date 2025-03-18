// c1: If statement
// Write a program that checks if the user wants to order green tea . If the user types "green tea" , the program should confirm their order.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string order;
    cout << "what would you like to order?" <<endl;
    getline(cin,order);
    transform(order.begin(),order.end(),order.begin(), :: tolower);
    if(order == "green tea"){
        cout << "you have ordered Green Tea" << endl;
    }
}
// c2: If-else statement
// write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 am and 6pm, the shop is open; otherwise, it's closed.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int time;
    cout << "to check whether the hotel is closed or open enter the time(between 0 to 23 hrs)?" <<endl;
    cin >> time;
    if(time > 8 && time < 18){
        cout << "the tea shop is open NOW!" << endl;
    }
    else{
        cout << "the tea shop is closed" << endl;
    }
}
// c3:Nested If-else statement
// A tea shop offers discounts based on the number of tea cups ordered. Write a program that cheecks the number of cups ordered and applies a discount : more than 20 cups: 20% discount
// * Between 10 and 20 cups: 10% discount.
// * Less than 10 cups: No discount.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int cups;
    float price = 7.5,totalprice;
    cout << "how many tea cups you want?" <<endl;
    cin >> cups;
    totalprice = price * cups;
    if(cups > 10 && cups < 20){
        totalprice -= totalprice*0.1;
        cout << "you have availed a discount and the totolprice is " <<totalprice << endl;
    }
        else if(cups > 20){
            totalprice -= totalprice*0.2;
            cout << "you have availed a discount and the totolprice is " <<totalprice << endl;
        }
        else{
            cout << "the totalprice is " << totalprice << endl;
        }
    
    }



// c4: Switch case
// write a program that lets the user select a tea type from a menu. use a switch case statement to display pice based on the selected tea:* green tea:2$
// black tea: 3$
// oolong tea: 4$

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int order;
    cout << "Today's Menu \n1. Green Tea \n 2.Lemon Tea \n 3.Black Tea\nWhat would ypu like to have?" <<endl;
    cin >> order;
    switch(order){
        case 1:
        cout << "you hav3e orderd Green Tea" << endl;
        break;
        case 2:
        cout << "you have orderd Lemon Tea" << endl;
        break;
        case 3:
        cout << "you have orderd Black Tea" << endl;
        break;
        default:
        cout << "your order is out of choice" << endl;
        break;


    }
    
    }