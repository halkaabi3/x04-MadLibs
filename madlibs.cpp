//Authors: 
#include <iostream>
#include <string>
using namespace std;

int main()
{
string car;
string location;
double number;
char letter;

cout<<"Enter a letter"<<endl;
cin>> letter;
cout<<"Name a car"<<endl;
cin>> car;
cout<<"Enter a number between 1,000 and 10,000"<<endl;
cin>> number;
cout<<"Enter a location"<<endl;
cin>> location;

cout<<"Mr. Mark "<< letter <<" Smith went to the car dealer to buy a "<< car <<", he wanted to buy it using an installment plan paying "<< number <<"$ a month. He plans to take his kids to "<< location <<" with it."<<endl;


  return 0;
}
