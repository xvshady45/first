#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"input a chracter: ";
    cin>>button;

    switch (button)
    {
        case 'a':
        cout << "hello"<< endl;
        break;
        case 'b':
        cout << "namesta"<< endl;
        break;
        case 'c':
        cout << "salut"<< endl;
        break;
        case 'e':
        cout << "hola"<< endl;
        break;

        default:
        cout << "iam still learning"<< endl;
        break;
    }
    return 0;
}