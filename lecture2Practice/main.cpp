//Practicing C++ Standard Template Library


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    //Vectors
    vector<int> f1;
    
    for (int i = 0; i <= 10; i++) {
        f1.push_back(i);
    }
    cout << "Output begins here: " << endl;
    for (auto i = f1.begin(); i != f1.end(); ++i) {
        cout << *i << " ";
    }


    return 0;
}
