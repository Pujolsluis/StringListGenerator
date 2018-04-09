#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<string> inputList;
    string inputString;

    // Line break sentence list.
    while(getline(cin, inputString)){
        inputList.push_back(inputString);
    }

    // Space separated word list.
    /*
    while(cin >> inputString){
        inputList.push_back(inputString);
    }
    */

    // If you wish to sort the list after reading it uncomment the line below.
    // sort(inputList.begin(), inputList.end());

    cout << "---- DONE READING INPUT FILE ----" << endl;

    for(int i=0; i<inputList.size(); i++){
        if (i != inputList.size()-1){
            cout << "\"" << inputList[i] << "\"," << endl;
        } else {
            cout << "\"" << inputList[i] << "\"" << endl;
        }
    }

    cout << "---- DONE PRINTING OUTPUT ----" << endl;

    return 0;
}
