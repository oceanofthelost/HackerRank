#include <iostream>
using namespace std;

int main()
{
    unsigned n;
    unsigned array[100] = {0};
    unsigned input;

    cin>>n;

    for(unsigned i=0;i<n;i++)
    {
        cin>>input;
        array[input]++;
    }

    for(unsigned i=0;i<100;i++)
    {
        cout<<array[i];
        if(i<n-1)
        {
            cout<<" ";
        }
    }
    
}
