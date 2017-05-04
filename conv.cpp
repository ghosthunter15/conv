#include <iostream>
#include <cmath>

using namespace std;

//func defs
void to_kel()
{
	//add submenu
	//fah=kel_f * 9/5 - 459.67
	//kel_f=(fah + 459.67 * 5/9
	//kel_c=cel + 273.15
	//cel=kel_c - 273.15
	
	int num;
	float temp;
	float fah;
	float cel;
	float kel;

	cout << "k_convert:\n";
	cout << "1: fah to kel\n";
	cout << "2: kel to fah\n";
	cout << "3: cel to kel\n";
	cout << "4: kel to cel\n";
	cout << " Enter a number: ";
	cin >> num;
	
	switch(num)
	{
		case 1:
			cout << "Enter temp in fah: ";
			cin >> temp;

			fah=temp * 9/5 - 459.67;
			cout << endl;
			cout << fah << "F°\n";
			break;
		case 2:
			cout << "Enter temp in kel: ";
			cin >> temp;

			kel=(temp + 459.67) * 5/9;
			cout << endl;
			cout << kel << "K°\n";
			break;
		case 3:
			cout << "Enter temp in cel: ";
			cin >> temp;
			
			kel=temp + 273.15;
			cout << endl;
			cout << kel << "K°\n";
			break;
		case 4:
			cout << "Enter temp in kel: ";
			cin >> temp;
			cel=temp - 273.15;
			cout << endl;
			cout << cel << "C°\n";
			break;
		default:
			cout << "Enter another number.\n";

		//return 0;
	}
}

int main(){
    
  int option;
  float weight;
  float fah;
  float cel;
    
  cout << "Weight Convert: " << endl;
  cout << endl;
  cout << "1: lbs to kgs" << endl;
  cout << "2: kgs to lbs" << endl;
  cout << "3: fah to cel\n"; // may error
  cout << "4: cel to fah\n"; // may error
  cout << "5: kelvin converter.\n"; //may error
  cout << endl;
    
  cout << "Please enter an option: ";
  cin >> option;
    
  // 1lb = 0.454kg
  // 1kg = 2.205lb
  // cel = (fah - 32) * 5/9
  // fah = cel * 9/5 + 32

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
	
   case 3:	//enter temp in fah to get cel
      cout << "Enter temp in fah: ";
      //get temp
      cin >> fah;

      //math and results
      cel = (fah - 32) * 5/9;
      cout << endl;
      cout << cel << "C°\n";
      break;

   case 4:	// enter temp in cel to get fah
      cout << "Enter temp in cel: ";
      cin >> cel;

      //math and results
      fah = cel * 9/5 + 32;
      cout << endl;
      cout << fah << "F°\n";
      break;

   case 5:
	to_kel();
	break;

   default:
     cout << endl;
     cout << "Please enter a different number.";
    
    }
    
    

  return 0;
}
