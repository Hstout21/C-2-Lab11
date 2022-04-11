//HUNTER STOUT - 4/8/2022
//LAB 11 MAIN  - lab11.cc

#include <iostream>

using namespace std;

//Helper Functions
int counting(int n);
void print_stars(int n);
void see_stars(int count, int stop);

//Main Function
int main(){

    //Part 1:
    int x;
    for(int j = 0; j < 3; ++j){
        cout << "Enter a number: ";
        cin >> x;
        cout << "The even numbers counting up to there:\n";
        counting(x);
        cout << endl;
    }

    //Part 2:
    int n;
    cout << "Enter a number between 1 and 30 to see the stars\n";
    cin >> n;
    see_stars(1, n);

return 0;
}

//Helper Functions
int counting(int n) {
    if(n <= 0) { //Base Case
        return 0;
    }

    counting(n-1); //Variant Expression

    if(n % 2 == 0) {
        cout << n << " ";
    }
    return 0;
}

void print_stars(int n) {
    if(n <= 0) { //Base Case
        cout << endl;
        return;
    }

    cout << "*";
    print_stars(n-1); //Variant Expression
}

void see_stars(int count, int stop) {
  if(count > stop) { //Base Case
    return;
  }

  print_stars(count); //Variant Expressions
  see_stars(count+1, stop);
  print_stars(count);
}
