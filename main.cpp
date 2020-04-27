//Stewart Sheppard 
// Assignment 5 
// Date: 4-25-20
// Based off the "A  Restaurant Project Struct style Dr_T Dr. Tyson McMillan 10-2-2019"

#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>
#include "colormod.h"
using namespace std; 



Color::Modifier red(Color::FG_RED);
Color::Modifier blue(Color::FG_BLUE);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier yellow(Color::FG_YELLOW);
Color::Modifier def(Color::FG_DEFAULT);
Color::Modifier redbg(Color::BG_RED);
Color::Modifier greenbg(Color::BG_GREEN);
Color::Modifier bluebg(Color::BG_BLUE);
Color::Modifier defbg(Color::BG_DEFAULT);



/*
// ************struct Style ***** //
struct MenuItem
{
  string name;
  double itemCost; 
  string desc; 
  char addLetter; 
  char removeLetter;
  int count; 
};
*/

//*******Classs Style*******//
class MenuItemList
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
    double subtotal;
  public:
  void setName(string n) {name = n; }
  void setItemCosts(double iT){itemCost = iT;}
  void setDesc(string d) {desc = d;}
  void setAddLetter(char aL) {addLetter = aL;}
  void setRemoveLetter(char rL){removeLetter = rL;}
  void setCount(int c) {count = c;}
  void setSubtotal(double s){subtotal = s;}
  string getName() const{return name;}
  double getItemCost() const {return itemCost;}
  string getDesc() const {return desc;}
  char getAddLetter() const {return addLetter;}
  char getRemoveLetter() const {return removeLetter;}
  int getCount() const {return count; }
  double getSubtotal()const {return subtotal;}
  //void print() { // print menu item data on demad }
}; 

/*
// ********Struct Style******* //
//function definitions
void populateMenu(vector<MenuItem> &entireMenu)
{
  //put some default values in our Menu
  const int numItems = 7; 
  MenuItem Item1;   //populating the vector
  MenuItem Item2;
  MenuItem Item3; 
  MenuItem Item4;
  MenuItem Item5;
  MenuItem Item6;
  MenuItem Item7;    

  entireMenu.push_back(Item1); //add to the end of list the Item1
  entireMenu.push_back(Item2); //add to the end of list the Item2
  entireMenu.push_back(Item3); //add to the end of list the Item3
  entireMenu.push_back(Item4); //add to the end of list the Item4
  entireMenu.push_back(Item5); //add to the end of list the Item5
  entireMenu.push_back(Item6); //add to the end of list the Item6
  entireMenu.push_back(Item7); //add to the end of list the Item7

  vector<string> defaultMenuNames = {"Green Tea", "Burrito", "sPBJ", "sEscargo", "sPotPie", "sPizza", "sApple Pie"}; 
  vector<char> defaultAddLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G'}; 
  vector<char> defaultRemoveLetters = {'a', 'b', 'c', 'd', 'e', 'f', 'g'}; 

  for(int i = 0; i < numItems; i++)
  {
    //add each item to the default list efficiently 
    entireMenu[i].name = defaultMenuNames[i]; 
    entireMenu[i].addLetter = defaultAddLetters[i]; 
    entireMenu[i].removeLetter = defaultRemoveLetters[i]; 
    entireMenu[i].itemCost = (3.00 + i); //set a random starter cost for each item
    entireMenu[i].count = 0; //initialze all counts to 0
    entireMenu[i].desc = "delicious"; //set all default desc to "delicous"
  }


} */

/// *******Class Style **** 
//funtion definitions

void populateObjectMenu(vector<MenuItemList> &entireMenu)
{
  //put some default values in our Menu
  const int numItems = 7; 
  MenuItemList Item1;   //Item1 is an object
  MenuItemList Item2;
  MenuItemList Item3; 
  MenuItemList Item4;
  MenuItemList Item5;
  MenuItemList Item6;
  MenuItemList Item7;    

  entireMenu.push_back(Item1); //add to the end of list the Item1
  entireMenu.push_back(Item2); //add to the end of list the Item2
  entireMenu.push_back(Item3); //add to the end of list the Item3
  entireMenu.push_back(Item4); //add to the end of list the Item4
  entireMenu.push_back(Item5); //add to the end of list the Item5
  entireMenu.push_back(Item6); //add to the end of list the Item6
  entireMenu.push_back(Item7); //add to the end of list the Item7

  vector<string> defaultMenuNames = {"Green Tea", "Burrito", "PBJ", "Escargo", "Pot Pie", "Pizza", "Apple Pie"}; 
  vector<char> defaultAddLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G'}; 
  vector<char> defaultRemoveLetters = {'a', 'b', 'c', 'd', 'e', 'f', 'g'}; 

  for(int i = 0; i < numItems; i++)
  {
    //add each item to the default list efficiently 
    entireMenu[i].setName(defaultMenuNames[i]); 
    entireMenu[i].setAddLetter(defaultAddLetters[i]); 
    entireMenu[i].setRemoveLetter(defaultRemoveLetters[i]); 
    entireMenu[i].setItemCosts(3.00 + i); //set a random starter cost for each item
    entireMenu[i].setCount(0); //initialze all counts to 0
    entireMenu[i].setDesc("delicious"); //set all default desc to "delicous"
  }


}

//****STruct Style*******/

/*void showMenu(vector<MenuItem> &m) //Where to adjust the menu layout
{
  cout << fixed << setprecision(2);//set doubles to 2 decimal places
  cout << "DrT's Effcient Menu" << endl; 
  cout << "ADD  \tNAME \t COST \tREMOVE\tCOUNT\tDESC"<<endl; 
  for(int i = 0; i < m.size(); i++)
  {
    cout << m[i].addLetter << ")" << setw(10) << m[i].name 
    << setw(5) << "$" << m[i].itemCost << setw(5) << "(" << m[i].removeLetter
    << ")" << setw(7) << m[i].count << setw(13) << m[i].desc 
    <<endl; 
  }

}*/


//**********Class Style******/
void showObjectMenu(vector<MenuItemList> &m) //Where to adjust the menu layout
{
  cout << fixed << setprecision(2);//set doubles to 2 decimal places
  cout << "DrT's Effcient Object Menu" << endl; 
  cout << "ADD  \tNAME \t COST \tREMOVE\tCOUNT\tDESC"<<endl; 
  for(int i = 0; i < m.size(); i++)
  {
    cout << m[i].getAddLetter() << ")" << setw(10) << m[i].getName() 
    << setw(5) << "$" << m[i].getItemCost() << setw(5) << "(" << m[i].getRemoveLetter()
    << ")" << setw(7) << m[i].getCount() << setw(13) << m[i].getDesc() 
    <<endl; 
  }

}

/*
// *************Structure Style ***************

void acceptOrder(vector<MenuItem> &m)
{
  char option = '\0';// the user-selected menu item
  double subtotal = 0.0; 

  do
  {
    cout << "\nPlease choose an item (x to Exit): ";
    cin >> option; 

    for(int i=0; i < m.size(); i++)
    {
      if(option == m[i].addLetter)
      {
        cout << "\nMenu Item " << m[i].addLetter << " selected."; 
        m[i].count++; //increment the count by 1
        cout << "\033[2J\033[1;1H"; //clear screen 
        cout << "\n1 UP on " << m[i].name << endl;
        subtotal += m[i].itemCost; //increment the subtotal by the cost of the item 
        showMenu(m); //show the updated menu
        cout << "\nSubtotal: $" << subtotal << endl;  
      }
      else if(option == m[i].removeLetter)
      {
        cout << "\nRemove Item " << m[i].removeLetter << " selected."; 
        if(m[i].count > 0) //subtract if and only if the count is > 0
        {
          m[i].count--; //decrement the count by 1
          cout << "\033[2J\033[1;1H"; //clear screen 
          cout << "\n1 DOWN on " << m[i].name << endl;
          subtotal -= m[i].itemCost; //decrement the subtotal by the cost of the item
          showMenu(m); //show the updated menu
          cout << "\nSubtotal: $" << subtotal << endl;  
        }
        else //the the user why you blocked item removal 
        {
            
            cout << "\nItem count must be > 0 to remove: " << m[i].name << endl;
        }
      }
      else if(
                option != m[i].addLetter && 
                option != m[i].removeLetter &&
                option != 'x' &&
                option != 'X' 
            ) //test for all of my valid inputs
            {
              if(i == 0)
              {
                cout << "\nInvalid input (" << option << "). Please try again." << endl; 
              }  
            }
    }
  }while(option != 'x' && option != 'X'); 
  cout << "\nThank you for placing your order." << endl; 
   // from the DrT Todo List in Assignement 5
  //handle the tip process here
  //handle reciept generation here
  //calculate total due + tax + tip// accept payment type
  //handle cash vs. credit (16 digit)
  //
 
} */

void printTextReceipt(vector<MenuItemList> &m) 
{
  fstream receipt;
  receipt.open("receipt.txt", ios::out);
 
  receipt.close();

  fstream html;
  html.open("index.html", ios::out);

  html << "<html><head><title>Cool</title></head>";
  html << "<body style=\"background-color:#000000; color:#FFFFFF;\">";
  html << "<h1>" << m[2].getName() << "</h1>" << endl;
  html << "</body></html>";
}



//*************Class  Style ***************

void acceptObjectOrder(vector<MenuItemList> &m)
{
  char option = '\0';// the user-selected menu item
  char decision = '\0';
  char paymentType = '\0';
  double subtotal = 0.0; 
  double tip = 0.0;
  double tipTotal = 0.0;
  double tax = 0.0;
  double totalwTax = 0.0;
  double grandTotal = 0.0;
  double amountTendered = 0.0;
  double totalCashRecd = 0.0;
  string ccNum;

  do
  {
    cout << "\nPlease choose an item (x to Finalize Bill): ";
    cin >> option; 

    for(int i=0; i < m.size(); i++)
    {
      if(option == m[i].getAddLetter())
      
      {
        cout << "\nMenu Item " << m[i].getAddLetter() << " selected."; 
        m[i].setCount(m[i].getCount() +1); //increment the count by 1
        cout << "\033[2J\033[1;1H"; //clear screen 
        cout << "\n1 UP on " << m[i].getName() << endl;
        subtotal += m[i].getItemCost(); //increment the subtotal by the cost of the item 
        showObjectMenu(m); //show the updated menu
        cout << "\nSubtotal: $" << subtotal << endl;  
      }
      else if(option == m[i].getRemoveLetter())
      {
        cout << "\nRemove Item " << m[i].getRemoveLetter() << " selected."; 
        if(m[i].getCount() > 0) //subtract if and only if the count is > 0
        {
          m[i].setCount(m[i].getCount() - 1); //decrement the count by 1
          cout << "\033[2J\033[1;1H"; //clear screen 
          cout << "\n1 DOWN on " << m[i].getName() << endl;
          subtotal -= m[i].getItemCost(); //decrement the subtotal by the cost of the item
          showObjectMenu(m); //show the updated menu
          cout << "\nSubtotal: $" << subtotal << endl;  
         
        }
        else //the the user why you blocked item removal 
        {
            
            cout << "\nItem count must be > 0 to remove: " << m[i].getName() << endl;
        }
      }
      else if(
                option != m[i].getAddLetter() && 
                option != m[i].getRemoveLetter() &&
                option != 'x' &&
                option != 'X' 
            ) //test for all of my valid inputs
            {
              if(i == 0)
              {
                cout << "\nInvalid input (" << option << "). Please try again." << endl; 
              }  
            }
    }
  }while(option != 'x' && option != 'X'); 
  cout << "\nThank you for placing your order." << endl; 
 
 // Calculate Tax and TIP 
 cout << "Your subtotal is \n" << subtotal << ".\n" << endl;
 tax = subtotal * .0825;
 cout << "Your tax is $" << tax << endl;
 totalwTax = subtotal + tax;
 cout << blue << "Your total cost is $" << totalwTax << def << endl;
 cout << green << "Would you like to add a 20% tip?\n";
 cout << "Press \"Y\" for \"Yes\" and \"M\" to give more.\n"<< def ; 
 cin >> decision;
    
      
      if (decision == 'Y' || decision == 'y')
      {
        tipTotal = subtotal * .20;
        cout << "Your tip will be $" << tipTotal << endl;
        grandTotal = totalwTax + tipTotal;
        cout << "Your total cost will be $" << grandTotal << endl;
      }
      else if (decision == 'M'|| decision == 'm')
      {  
        cout << green << "Thanks for giving more than 20%.\n";
        cout << "Please enter your generous amount in the form of a decimal!\n\n";
        cout <<  "For example: .25 (25%), .30 (30%), etc.\n" << def ;
        cin >> tip;
        cout << greenbg << "Thank you for your generous tip!\n" <<defbg ;
        tipTotal = subtotal * tip;
        cout << "Your tip will be $" << tipTotal << endl;
        grandTotal = totalwTax + tipTotal;
        cout << "Your total cost will be $" << grandTotal << defbg << endl;
        
        }

  //Payment type

  cout << "Will you be paying with Cash or Card? \n";
  cout << "Please enter in \"C\" for Cash and \"R\" for Card.\n";  


  cin >> paymentType;  
  if (paymentType == 'C' || paymentType == 'c')
      {
       cout << "Enter in the amount of cash received.\n";
       cin >> totalCashRecd;
        amountTendered = totalCashRecd - grandTotal;
        cout << "Change will be $" << amountTendered << endl;
        
      }
      else if (paymentType == 'R'|| paymentType == 'r')
      { 
        cout << "Enter in your 16 digit credit card number.";
        while (paymentType == 'R' || paymentType == 'r')
        {
        //cout << "Enter in your 16 digit credit card number.";
          cin >> ccNum;
          if (ccNum.length() == 16)
              {
              cout << "Thank you for your payment.\n";
              cout << "Your Card will be charged or debited :" << grandTotal << endl;
              }          
          else if(ccNum.length() != 16)
              {
              cout << "Please re-enter your 16 digit card code.\n";
              cin >> ccNum;         
              } 
        }  //end while loop
      }
      
      printTextReceipt(m);     
         
       


  //caculate total due + tax + tip
  // accept payment type
  //handle cash vs. credit
  //handle on-screen reciept generation here
  //handle on the text file reciept generation here
  //loop the program, reset item counts and total due
  //until exit 
 }




int main() 
{
  //******Struct Style*******//


 /* vector<MenuItem> wholeMenu; 
  populateMenu(wholeMenu); //put some default values in the menu
  showMenu(wholeMenu); //print the current data of the menu on screen 
  acceptOrder(wholeMenu); */

  //*****Class Style*****/
  vector<MenuItemList> ObjectMenu;
  populateObjectMenu(ObjectMenu); 
  showObjectMenu(ObjectMenu); // show the initial menu on screen
  acceptObjectOrder(ObjectMenu);
  printTextReceipt(ObjectMenu);

 return 0;

}