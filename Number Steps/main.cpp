#include <iostream>

using namespace std;

int test;
int X, Y;
int penis;

int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        cin>>X>>Y;
        
        if(X-Y==0 || X-Y==2)
        {
            if(X%2==0)
            {
                cout<<X+Y<<endl;
            }
            else
            {
                cout<<X+Y-1<<endl;
            }
        }
        
        else
            cout<<"No Number"<<endl;
    }
    
    return 0;
}
