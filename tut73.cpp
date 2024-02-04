#include <iostream>
#include <string>
#include <map>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMAp;
    marksMAp["Nick"] = 98;
    marksMAp["Harry"] = 59;
    marksMAp["Jack"] = 8;
    map<string, int>:: iterator itr;
    marksMAp.insert({{"Steve",99},{"Jeff",88}});

    for (itr = marksMAp.begin(); itr!= marksMAp.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    
    cout<<"The size is: "<<marksMAp.size()<<endl;
    cout<<"The Max size is: "<<marksMAp.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMAp.empty()<<endl;

    return 0;
}