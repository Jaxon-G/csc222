#include <iostream>
using namespace std;

void showElement(int nums[], int index) {
    cout << "nums[" << index << "] is " << nums[index] << endl;
}

void addElements(int nums[], int index1, int index2){
    cout << "nums [" << index << "] + nums[" << index2 << "] = ";
    cout << nums[index1] +nums[index2] << endl;

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


    addElements(nums, 5, 6);
    return 0;

}
