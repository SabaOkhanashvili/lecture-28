#include <iostream>

using namespace std;

int main()
{
    int m;
    
    m = 21;
    
    int *ab = &m;
    cout<<"მისამართი: "<<ab<<" ღირებულება: "<<*ab;   
    *ab=18;
    cout<<"\n ახალი მისამართი: "<<ab<<" ახალი ღირებულება: "<<*ab;
    *ab=3;
    cout<<"\n ახალი მისამართი: "<<ab<<" ახალი ღირებულება: "<<*ab;
    
    
    return 0;
}