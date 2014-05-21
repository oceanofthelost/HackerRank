#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct Data
{
    unsigned index; //index in origional array
    string data;
};

int main()
{
    unsigned n;
    queue<Data> array[100];
    unsigned input_number;
    string input_string;
    Data temp;

    cin>>n;

    for(unsigned i=0;i<n;i++)
    {
        cin>>input_number>>input_string;
        temp.data = input_string;
        temp.index = i;
        array[input_number].push(temp);
    }

    for(unsigned i=0;i<100;i++)
    {
        while(!array[i].empty())
        {
            temp = array[i].front();
            array[i].pop();
            if(temp.index >= n/2)
            {
                cout<<temp.data<<" ";
            }            
            else
            {
                cout<<"-"<<" ";
            }
        }
    }

    return 0;
}
