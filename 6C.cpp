#include<iostream>
using namespace std;
class count0
{
    static int count1;
public:
    count0()
    {
        count1++;
    }
    static void showcount()
    {
        cout<<"number of participants: "<<count1;
    }
};
int count0:: count1;
int main()
{
    counting c1,c2,c3;
    counting::showcount();
    return 0;
}

