#include <iostream>

using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;
    int numHours = 7;

    //MINUTES_PER_HOUR++;
    numHours++;
    cout << "There are " << MINUTES_PER_HOUR * numHours << " minutes in " << numHours << " hours" << endl;

    unsigned int zeroHours = 0;
    zeroHours--;

    cout << "1 hour before zero is " << zeroHours << endl;
    return 0;
}
