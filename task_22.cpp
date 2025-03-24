#include <iostream>;
#include <fstream>;

using namespace std;
int main(){
    ifstream inFile("output.txt");
    int value, index = 1;
    while (inFile >> value) {
        cout << index << ". " << value << endl;
        index++;
    }

    inFile.close();
    return 0;
}
