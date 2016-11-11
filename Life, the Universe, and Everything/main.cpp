#include <iostream>

using namespace std;

int number;

int main()
{
    while (cin>>number)
    {
        if(number==42)
            break;
        else
            cout<<number<<endl;
    }
    
    return 0;
}
