#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    ostream_iterator<int> writeIt(cout, "\n");

    *writeIt = 10;
    writeIt++;
    *writeIt = 20;

    vector<int> coll;
    for(int i = 0; i < 20; i++)
        coll.push_back(i);

    copy(coll.begin(), coll.end(),
         ostream_iterator<int>(cout, " "));
    cout << endl;

    istream_iterator<string> intIt(cin);
    istream_iterator<string> intEOF;
    ostream_iterator<string> strIt(cout);
    while(intIt != intEOF)
    {
        advance(intIt, 2);

        if(intIt != intEOF)
           *strIt++ = *intIt++;


    }

    return 0;
}
