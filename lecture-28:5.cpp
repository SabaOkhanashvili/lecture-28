#include <iostream>

using namespace std ;

int main()
{
    int num1;
    int num2;
    int *ptr1;
    int *ptr2;
    int sum;
    cout<<"მიუთითეთ პირველი რიცხვი: ";
    cin >> num1;
    cout<<"მიუთითეთ მეორე რიცხვი: ";
    cin >> num2;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    sum = *ptr1 + *ptr2;
    
    cout<<"ჯამი არის: "<<sum<<endl;
     return 0 ;
}