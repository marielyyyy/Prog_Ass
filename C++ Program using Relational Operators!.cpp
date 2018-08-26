#include <iostream>
using namespace std;
int main ()
{

cout << "\n Let's Know your Height and Weight! \n\n\n";
int height, weight;
       
cout << "Enter your height in centimeters: ";
cin >> height;
cout << "Enter your weight in pounds: ";
cin >> weight;

if (height == weight)
{
    cout << "Your height is equal to your weight!";
}
    
else if (height < weight)
{
    cout << "Your height is less than your weight!";
}
    
else if (height > weight)
{
    cout << "Your height is greater than your weight!";
}
    
else if (height != weight)
{
    cout << "Your height doesn't equal your weight!";
}
    
else 
{
    cout << "Something's wrong!!!";
}    

return 0;
}