// sort() Example using vectors.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(15);
    numbers.push_back(2);
    numbers.push_back(-5);
    numbers.push_back(100);

    //Now we call the sort function
    sort(numbers.begin(), numbers.end());

    cout << "Sorted Array looks like this." << endl;
    for(unsigned i = 0; i < numbers.size(); i++){
        cout << numbers[i] << endl;
    }
    return 0;
}