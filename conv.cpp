#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
  int option;
  float weight;
    
  cout << "Weight Convert: " << endl;
  cout << endl;
  cout << "1: lbs to kgs" << endl;
  cout << "2: kgs to lbs" << endl;
  cout << endl;
    
  cout << "Please enter an option: ";
  cin >> option;
    
  // 1lb = 0.454kg
  // 1kg = 2.205lb
    
  switch (option){
    
   case 1:
        
     cout << "Enter lbs: ";
     cin >> weight;
        
     weight=weight*0.454;
     cout << endl;
     cout << weight << "kgs" << endl;
     break;
        
   case 2:
    
     cout << "Enter kgs: ";
     cin >> weight;
        
     weight=weight*2.205;
     cout << endl;
     cout << weight << "lbs";
     break;
        
   default:
     cout << endl;
     cout << "Please enter a different number.";
    
    }
    
    

  return 0;
}
