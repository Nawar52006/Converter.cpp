#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float ctemp,result;
    int choice;
    cout << " for Exchange from Celsius to Fahrenheit Enter 1 ,from Celsius to Kelvin Enter 2 " << endl;
    cin>> choice ;
    cout << "temppreture in Celsius=";
    cin>> ctemp;
    switch(choice)
    {
    case 1 : cout << "Fahrenheit=" << result = (ctemp * 1.8) + 32 << endl;
    
    break;
    case 2 : cout << "Kelvin=" << ctemp+273.15 << endl;
    break;
    default:
    cout << "ERROR" << endl;
    }
    return 0;
}
