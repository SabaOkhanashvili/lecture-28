#include <iostream>
#include <conio.h>
using namespace std;


void findFactorial(int, int *);
int main()
{
    int i,fact,num;
    cout<<"შეიყვანეთ რიცხვი: \n";
    cin>>num;
    findFactorial(num,&fact);
    cout<<"ფაქტორიალი: "<<num<<" არის: "<<fact;
    getch();

    return 0;
}

void findFactorial(int num,int *fact){
    int i;
    
    *fact = 1;
    
    for(i=1;i<=num;i++){
        *fact=*fact*i;
    }
}