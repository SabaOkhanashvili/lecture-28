#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char str[20], *pt;
    int i = 0;
    
    
   cout << "პოინტერის მაგალითი C++ პროგრამა: გამოთვალეთ სტრიქონის სიგრძე \n";

   cout << "შეიყვანეთ ნებისმიერი სტრიქონი [20 სიმბოლოზე ქვემოთ] : ";
   cin>>str;
   
   pt = str;
   while(*pt != '\0'){
       i++;
       pt++;
   }
   cout << "\nსტრიქონის სიგრძე : " << i;

   getch();

    return 0;
}