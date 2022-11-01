#include <iostream>

using namespace std;

const int numOfThings = 5;

struct car {
double carNum;
double milesDriven;
double Gallons;
};

int main() {

  car data[numOfThings];

  cout << "Please enter Car Number, Miles Driven, and Gallons of Gas Used for each car" << endl;

  for (int i = 0; i < numOfThings; i++){
    cin >> data[i].carNum >> data[i].milesDriven >> data[i].Gallons;
    
  }
  
  
  
  
  
}