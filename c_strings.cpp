#include <iostream>
using namespace std;

int str_len(char arr[]){
    int length = 0;
    
    while (arr[length] != '\0'){
        length++;
    }

    return length;
}



int main(){
    char s[] = "What are C strings?";
    
    cout << "Length: " << str_len(s) << endl;

    return 0;
}
