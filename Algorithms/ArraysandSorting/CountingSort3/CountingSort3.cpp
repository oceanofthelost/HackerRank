#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned n;
    unsigned array[100] = {0};
    unsigned input;
    string input_string;

    cin>>n;

    for(unsigned i=0;i<n;i++)
    {
        cin>>input>>input_string;
        array[input]++;
    }

    unsigned numberlessthan = 0;
    for(unsigned i=0;i<100;i++)
    {
        numberlessthan += array[i];
        cout<<numberlessthan<<" ";
    }

    return 0;
}
