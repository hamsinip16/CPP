// Binary and Linear Searching 

#include <iostream>
#include <vector>

using namespace std;

//BINARY SEARCH
int binarySearch(vector<int>& array, int searchNo) {
    int low = 0;
    int high = array.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (searchNo == array[mid]){
            return mid;
        }

        if (searchNo > array[mid]){
            low = mid + 1;
        }
      
        if (searchNo < array[mid]){
            high = mid - 1;
        }

    }

  return -1;
}

//LINEAR SEARCH
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;  // Return the index if the element is found
        }
    }

    return -1;  // Return -1 if the element is not found
}

int main(void) {
  vector<int> A = {2,4,7,9,10,13,20};
  int searchVal;
  
  cout << "Sorted Array:";
  for(const auto& num : A){
      cout << num << " ";
  }
  
  cout << "\nEnter the value to search: " ;
  cin >> searchVal;
  
  int size = A.size();
  
    int linearResult = linearSearch(A, searchVal);
    int binaryResult = binarySearch(A, searchVal);
    if ((linearResult == -1) || (binaryResult == -1)){
        cout <<"Element doesn't exist in the array" << endl;
    }
    else{
        cout <<"Linear Search: The index of the element is " << linearResult<<endl;
        cout <<"Binary Search: The index of the element is " << binaryResult<<endl;
    }
}
