#include <iostream>
using namespace std;

//define function SwapValues(); parameters 4 integers passed by reference; return void
//function will swap val1 with val2 and val3 with val4
void SwapValues(int &val1, int &val2, int &val3, int &val4){
  int temp;
  temp = val1;
  val1 = val2;
  val2 = temp;
  temp = val3;
  val3 = val4;
  val4 = temp;
}


int main(){
  int num1, num2, num3, num4;
  //read in 4 integers
  cin >> num1 >> num2 >> num3 >> num4;
  //call SwapValues()
  SwapValues(num1, num2, num3, num4);
  //print out 4 integers swapped
  cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
  return 0;
}