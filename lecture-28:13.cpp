#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    cout << "შეიყვანეთ სტრიქონის ხაზი: ";
    cin.getline(line, 200);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
           
          
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='8')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }

    cout << "ხმოვანი: " << vowels << endl;
    cout << "თანხმოვნები: " << consonants << endl;
    cout << "ციფრები: " << digits << endl;
    cout << "თეთრი სივრცეები: " << spaces << endl;

    return 0;
}