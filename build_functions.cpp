
#include <iostream>
using namespace std;
char  get_user_input();
void to_upper_case(char &letter);
int main(){
  char user_input_letter;
  cout << "Type in a letter grade, lowercase or uppercase." << endl; 
  if ('0' != (user_input_letter = get_user_input())){
    to_upper_case(user_input_letter);
    switch (user_input_letter){
      case 'A': cout << "Super Great job on an A!" << endl;break;
      case 'B': cout << "Great job on a B!" << endl;break;
      case 'C': cout << "Good job on a C!" << endl;break;
      case 'D': cout << "Keep at it, you can get there." << endl;break;
      case 'F': cout << "F is for #fail" << endl;break;
      default : cout << "This is not a valid grade: " << user_input_letter << endl;
    }
  }
  cout << "You have entered 0.  Exiting." << endl; 
}
char  get_user_input(){
    
    char grade;
    cout << "Enter a letter grade: "<< endl;
    cin >> grade;
    return;
}
void to_upper_case(char &letter){
   
   char letter;
   if (letter = 'a')
   {
       cout << char(65) << endl;
   }
   else if (letter = 'b')
   {
       cout << char(66) << endl;
   }
   else if (letter = 'c')
   {
       cout << char(67) << endl;
   }
   else if (letter = 'd')
   {
       cout << char(68) << endl;
   }
   else if (letter = 'f')
   {
       cout << char(70) << endl;
   }
   return;
}