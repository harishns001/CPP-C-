/*c1
Tea information display write a program that declares variables to store the type of tea its price per kilogram(float), and its rating(char). Use data types effectively and print them in a formatted output using escape sequences.*/
#include <iostream>
using namespace std;

int main(){
string usertea;
float teaprice;
char tearating;
cout <<"which tea would you like to purchase?"<<endl;
getline(cin,usertea);
cin >> teaprice;
cout <<"the price of "<< usertea <<" is " << teaprice <<endl;
cout << "How would you rate this?" <<endl;
cin >> tearating;
cout <<" Thank you for the "<< tearating << " rating " << endl;

return 0;
}

// c2
// Modify Tea prices create a program where the user inputs a base price for tea.Use typecasting to increase the price by 10% and display the rounded new price using explict casting

#include <iostream>

using namespace std;

int main(){
string usertea;
float baseteaprice;
float totalteaprice;

cout << "what tea would like to have?"<< endl;
getline(cin,usertea);
cout << usertea << ", Great choice!" <<endl;
cout << "what are you up to?"<< endl;
cin >> baseteaprice;
totalteaprice =(int) (baseteaprice + baseteaprice*0.1);

cout << "Hence, your total cost is "<< totalteaprice << endl;
}

// c3
// Favorite Tea input. Write a program that takes the user's favorite tea as input using getline and also asks how many cups of tea they want using cin Display the result ina fun message.

#include<iostream>

using namespace std;

int main(){
    string userfavt;
    int nocups;
    cout << "What is your Favorite Tea"<< endl;
    getline(cin,userfavt);
    cout << "How many cups you require?" << endl;
    cin >> nocups;
    cout << "Thank You,cups of your Tea will be in couple of seconds";
}