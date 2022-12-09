#include <iostream>

using namespace std;

int main()
{   
    int *ptr1, *ptr2;
    int num1,num2;
    int result;
    
    cout<<"მიუთითეთ პირველი რიცხვი: ";
    cin >>num1;
    cout<<"მიუთითეთ მეორე რიცხვი: ";
    cin >> num2;
    ptr1 = &num1;
    ptr2 = &num2;
    
    result = *ptr1+*ptr2;
    
    cout<<result;

    return 0;
}
