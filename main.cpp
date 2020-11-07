#include <iostream>
using namespace std;
int main() {
  
  int initial_pop {};  //initial population
  int days {};         //days passed
  int final_pop {};    //Final population
  int option {};

  do{
    cout << "Enter the current population of green crud (in pounds) : ";
    cin >> initial_pop;
    cout << "Enter the number of days went : ";
    cin >> days;

    //Fibonacci Sequence extraction
    int fib_pos = days/5;     //Fibonacci limiting 

    int first {},second {1};
    int fib {};     //fib number of current index 
    int temp {};

    //fib finding loop
    for(int i = 1; i <= fib_pos; i++) {
      if(i == 1) {
        fib = first;
        // cout << fib << " " ;
        final_pop = initial_pop + (0*initial_pop);
        // cout << final_pop << " ";
        continue;
      }
      else if(i == 2) {
        fib = second;
        // cout << fib << " ";
        final_pop = initial_pop + (1*initial_pop);   
        // cout << final_pop << " ";
        continue;
      }
      else {
        temp = second;
        second += first;
        first = temp;
        fib = second;
        // cout << fib << " ";
        final_pop = final_pop + (fib*initial_pop);
        // cout << final_pop << " ";
      }
    }//end of loop

    cout << "After " << days << " days green crud's population would be : " << final_pop << " pounds!" << endl;
    cout << endl;
    cout << "Would you like to do it again! (enter -1 to continue) : ";
    cin >> option;
    cout << endl;
    cout << endl;

  }while(option == -1);

  cout << "Thank You!";
  return 0;
}  