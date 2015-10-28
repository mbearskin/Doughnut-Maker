//Programmer: Martha Winger-Bearskin     Date: 2/15/13
//File: doughnutMaker.cpp                Class: CS 53 A
//Purpose:This program will take input from the user and use that to determine
// what type of doughnut (including topping choices) Marge will make for Homer

#include <iostream>
using namespace std;

int main()
{
    
  //Constants
  const string USER = "Marge";
  const string RECIPIENT = "Homer";
  const string BASE1 = "Krustybase";
  const string BASE2 = "Wiggumbase";
  const string TOP1 = "strip(s) of bacon";
  const string TOP2 = "pat(s) of butter";
  const string TOP3 = "oz of Velveeta cheese";
  const string TOP4 = "chicken skin(s)";
  const string TOP5 = "dollop of greese-cream";
  const string ALT = "Beer";
  const int stairway = 10;
  // hold point values for toppings
  const int BASE_POINT = 10;
  const int TOP1_POINT = 5;
  const int TOP2_POINT = 3;
  const int TOP3_POINT = 6;
  const int TOP4_POINT = 50;
  const int TOP5_POINT = 13;
  const int ALT_POINT = 4;
  // regular variables
  bool baseType1 = 0;  // Krustybase
  bool baseType2 = 0;  // Wiggumbase
  int numTop1 = 0;     // Bacon
  int numTop2 = 0;     // Butter
  int numTop3 = 0;     // Cheese
  int numTop4 = 0;     // Chicken skin
  int numTop5 = 0;     // greese-cream
  int thumps;
  int doh;
  int steps;
  int clothing;
  int topCounter = 0;
  int points = 0;
    
  // promt user for input
    
  cout << "Good Morning " << USER << "!" << endl;
  cout << "Welcome to " << RECIPIENT << "'s doughnut recipe calulator";
  cout << endl << endl;
  cout << "Enter the number of times " << RECIPIENT;
  cout << " thumps his head on the floor as he fell out of bed this morning: ";
  cin  >> thumps;
  cout << endl;
  cout << "Enter the number of times " << RECIPIENT;
  cout << " yells “DOH” as he shaves: ";
  cin  >> doh;
  cout << endl;
  cout << "Enter the number of steps " << RECIPIENT;
  cout << " sucessfully climbs down before falling down the rest: ";
  cin  >> steps;
  cout << endl;
  cout << "Enter the number of articles of clothing " << RECIPIENT;
  cout << " is missing when he comes to the kitchen: ";
  cin  >> clothing;
  cout << endl << endl;
    
  // validate user input
  if (thumps >= 0 && doh > 0 && (steps >=0 && steps <=stairway) && clothing >=0)
  {
      if (thumps%2 == 0)   // determine base type
            baseType1 = true;
      else
            baseType2 = true;
        
      if (topCounter <3) // checks number of topping used so far
      {
          if (baseType1)
              numTop1 = doh; // use topping 1
          else
              numTop2 = doh; // use topping 2
          if (numTop1 > 0 || numTop2 > 0)//check if either topping was used
              topCounter++; // increase the number of toppings used
      }
      if (topCounter < 3)
      {
          numTop3 = (stairway-steps) + doh; // use topping 3
          topCounter++;
      }
      //check to see if topping 4 will get used
      if (topCounter <=3 && clothing%3 == 0 && clothing > 0)
      {
          numTop4 = 1;
          topCounter++;
      }
      //check to see if topping 5 will get used
      if (topCounter <3 && clothing > 2 && baseType1)
      {
          numTop5 = 1;
          topCounter++;
      }
      //check if topping 4 should be added (again)
      else if (topCounter <3 && clothing == 0)
      {
          if (numTop4 == 0) //if topping 4 has not been added yet
                topCounter++; //the counter is incremented
          numTop4 += 2;
      }
        
      // Output results and calulate points
      cout << "Today's Doughnut will be a ";
      if (baseType1)
        cout << BASE1;
      else
        cout << BASE2;
      cout << " with ";
      if (numTop1)
      {
        cout << numTop1 << " " << TOP1 << ", ";
        points += (TOP1_POINT * numTop1);
      }
      if (numTop2)
      {
        cout << numTop2 << " " << TOP2 << ", ";
        points += (TOP2_POINT * numTop2);
      }
      if (numTop3)
      {
        cout << numTop3 << " " << TOP3 << ", ";
        points += (TOP3_POINT * numTop3);
      }
      if (numTop4)
      {
        cout << numTop4 << " " << TOP4 << ", ";
        points += (TOP4_POINT * numTop4);
      }
      if (numTop5)
      {
        cout << numTop5 << " " << TOP5 << ", ";
        points += (TOP5_POINT * numTop5);
      }
      cout << endl << endl;
      points += BASE_POINT;
  }
    
  // input was bad!
  else
  {
    cout << USER << ", you are having trouble counting today..." << endl;
    cout << "Skip the doughnut and give " << RECIPIENT << " a " << ALT;
    cout << endl;
    points += ALT_POINT;
  }
    
  cout << "Today's Breaksfast score is: " << points << endl;
  cout << "Have a great day!";
    
  return 0;
}

