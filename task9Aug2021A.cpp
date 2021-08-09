#include <iostream>
using namespace std;
int main()
{
cout << "Enter any number : ";
int input;
int counter =0;
cin >> input; 
for( ;input > 0 ; input= input/10)
{
counter++;
}
cout << "The length of the number is " << counter << " ." << endl;
}