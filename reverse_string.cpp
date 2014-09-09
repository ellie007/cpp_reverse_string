//this is a reverse string done in the stack, passed as a reference.

#include <iostream>
#include <string>

using namespace std;

string reverseString(string& someString){
    cout << "Original String: " << someString << "\n";

    int stringLength = 0;
    while(someString[stringLength] != '\0'){
        stringLength += 1;
    }

    int lengthDecrementor = stringLength - 1;
    for (int j = 0; j < stringLength/2; j ++){
        char temp;
        temp = someString[j];
        someString[j] = someString[lengthDecrementor];
        someString[lengthDecrementor] = temp;
        lengthDecrementor -= 1;
    }

    string result;
    result = someString;

    cout << "Reversed String: " << result << "\n";
    return result;
}

int main(){
    string sampleString = "Hi my name is Eleanor!";
    reverseString(sampleString);
}



//this is a reverse string in the heap
//#include <iostream>
//#include <string>

// using namespace std;

// string reverseString(std::string someString){
//     std::cout << someString;
//     return someString;
// }

// int main(){
//     std::string* sampleString = new std::string;
//     *sampleString = "Today is going to be a great day!";
//     reverseString(*sampleString);
//     return 0;
// }


