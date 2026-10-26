#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int a[], int size){
    for (int i = 0, i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void shuffle(int a[], int size){
    for (int i = 0; i < size; i++){
        int j = rand() % size;
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

void shuffleClone(int original[], int result[], int size){
    for (int i = 0; i < size; i++){
        result[i] = original[i];
    }
        
    shuffle(result, size);

    

}

int main(){
    srand(time(null));
    
    int array[5] = {1, 2, 3, 4, 5};

    cout << "Array before shuffle: ";
    printArray(array, 5);

    return 0;
}
