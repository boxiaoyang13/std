#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char **argv)
{
    ostream_iterator<int> writeIt(cout, "\n");

    *writeIt = 10;

    return 0;
}
