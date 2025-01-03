#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {5, 2, 6, 1, 3, 4};
    int min;
    for(int i = 0; i < arr.size(); i++){
        min = i;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    return 0;
}
