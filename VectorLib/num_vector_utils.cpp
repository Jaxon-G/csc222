#include "num_vector_utils.h"

string render_num_vector(const vector<int>& vector) {
    
    string s = "";

    for (int i = 0; i < vector.size(); i++){
        if (i > 0){
            s += " ";
        }
        s += to_string(vector[i]);   
    }
    return s;
}


int num_vector_sum(const vector<int>& nums){

    int total = 0;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
    }
    return total;
}

int num_vector_product(const vector<int>& nums) {
    
    int total = 1;

    for (int i = 0; i < nums.size(); i++) {
        total *= nums[i];
    }
    return total;
}

vector<int> only_evens(const vector<int>& nums) {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0) {
            result.push_back(nums[i]);
        }
    }
    
    return result;
}

vector<int> only_odds(const vector<int>& nums) {
    vector<int> result;

    return result;
}
