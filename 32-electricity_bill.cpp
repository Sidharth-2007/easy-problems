//To Find Electricity Bill

#include <iostream>

int main(){
    int unit;
    float bill;
    
    std::cout << "Enter Units Consumed: ";
    std::cin >> unit;
    
    if (unit<=50)
    {
     bill=unit*16.5;
     std::cout << "The Bill amount is" << bill << " Rs" << std::endl;
    }
    
    else if (unit<=150)
    {
     bill= (unit*16.5) + (unit-50)*24.5;
     std::cout << "The Bill amount is " << bill << " Rs" << std::endl;          //Includes Rate Of 50 Units 
    }
    
    else if (unit<=300)
    {
     bill= (unit*16.5) + (unit*24.5) + (unit-150)*32.5;
     std::cout << "The Bill amount is " << bill << " Rs" << std::endl; 
    }
    
    else if (unit>300)
    {
     bill= (unit*16.5) + (unit*24.5) + (unit*32.5) + (unit-300)*40.5;
     std::cout << "The Bill amount is" << bill << " Rs" << std::endl; 
    }
    
    return 0;
}
