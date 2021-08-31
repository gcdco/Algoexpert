#include <vector>
using namespace std;

vector<int> threeNumberSort(vector<int> array, vector<int> order) {
  for(int j = 0; j < order.size(); j++){
    int currentOrder = order[j];
    int nextPointer = 0;
    for(int i = 0; i < array.size(); i++){
      if(array[i] != currentOrder){
        swap(array[nextPointer], array[i]);
        nextPointer++;
      }
    }
  }
  return array;
}
