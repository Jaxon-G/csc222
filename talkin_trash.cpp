#include <iostream>
using namespace std;

void showElement(int nums[], int index) {
    cout << "nums[" << index << "] is " << nums[index] << endl;
}

int main(){

    int nums[4] = {10, 20, 30, 40};

    cout << "Inside the array:" << endl;
    for (int i = 0; i < 4; i++) {
        showElement(nums, i);
    }

    cout << "Outside the array:" << endl;
    for (int i = 4; i < 8; i++) {
        showElement(nums, i);
    }


    int result = nums[6] + 100;
    cout << "nums[6] + 100 is " << result << endl;
    return 0;

}
