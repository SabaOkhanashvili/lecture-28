#include <iostream>

using namespace std;

int main()
{
    int m = 120;
    float fx = 123.23;
    char cht = 'z';
    
    cout<<&m;
    cout<<'\n'<<&fx;
    cout<<'\n'<<&cht;
    
    int *ptr1 = &m;
    float *ptr2 = &fx;
    char *ptr3 = &cht;
    
    cout<<'\n'<<*ptr1;
    cout<<'\n'<<*ptr2;
    cout<<'\n'<<*ptr3;
    
    cout<<'\n'<<ptr1;
    cout<<'\n'<<ptr2;
    cout<<'\n'<<ptr3;
    return 0;
}