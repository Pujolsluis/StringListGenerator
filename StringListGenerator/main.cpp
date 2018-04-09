#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> inputList;
    string inputString;

    while(cin >> inputString){
        inputList.push_back(inputString);
    }

    // If you wish to sort the list after reading it uncomment the line below.
    // sort(inputList.begin(), inputList.end());

    cout << "---- DONE READING INPUT FILE ----" << endl;

    for(string outputString : inputList) {
        cout << "\"" << outputString << "\"," << endl;
    }

    cout << "---- DONE PRINTING OUTPUT ----" << endl;

    return 0;
}
