#include <iostream>
using namespace std;

int main(){

    int nums[4] = {10, 20, 30, 40};

    cout << "Inside the array:" << endl;
    cout << "nums[3] is " << nums[3] << endl;

    cout << "Outside the array:" << endl;
    cout << "nums[4] is " << nums[4] << endl;
    cout << "nums[5] is " << nums[5] << endl;
    cout << "nums[6] is " << nums[6] << endl;

    int result = nums[6] + 100;
    cout << "nums[6] + 100 is " << result << endl;
    return 0;

}
