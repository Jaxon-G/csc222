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
