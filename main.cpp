#include <iostream>
using namespace std;

int main()
{
    float F, C; //c for celsius and F to farenheit
    
    cout << "enter the value of temperature in farenheit: " ;
    cin >> F;
    
    C = (F-32)*5/9;
    cout << "temperature value in celsius: " << C;
    
    
    return 0;
}