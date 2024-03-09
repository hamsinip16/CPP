//Bubble sort, Selection sort, Insertion sort, Quick sort in the same program

#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>& arr);
void selectionSort(vector<int>& arr);
void insertionSort(vector<int>& arr);
void quickSort(vector<int>& arr, int low, int high);

void printArray(const vector<int>& arr);
void swap(int* x, int* y);
int partition(vector<int>& arr, int low, int high);

int main() {
    vector<int> A = {9, 4, 8, 3, 7, 1, 6, 2, 5};
    int size = A.size();

    cout << "Unsorted Array = ";
    printArray(A);
    
    // Call Insertion Sort and print the result
    insertionSort(A);
    cout << "Insertion Sort: ";
    printArray(A);

    // Call Bubble Sort and print the result
    bubbleSort(A);
    cout << "Bubble Sort: ";
    printArray(A);

    // Call Selection Sort and print the result
    selectionSort(A);
    cout << "Selection Sort: ";
    printArray(A);

    // Call Quick Sort and print the result
    quickSort(A, 0, size - 1);
    cout << "Quick Sort: ";
    printArray(A);

    return 0;
}

void printArray(const vector<int>& arr) {
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void swap(int*x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

//BUBBLE SORT
void bubbleSort(std::vector<int>& arr) {
    int size = arr.size();

    for (int i = 0; i < size - 1; ++i) {
        for (int var = 0; var < size - i - 1; ++var) {
            if (arr[var] > arr[var + 1]) {
                swap(arr[var], arr[var + 1]);
            }
        }
    }
}

//SELECTION SORT
void selectionSort(vector<int>& arr)
{
    int size = arr.size();
    // Contains index of minimum element in unsorted subarray
    int minIndex;

    // Move boundary of unsorted subarray
    for(int i = 0; i < size - 1; i++)
    {
        // Find the minimum element in unsorted subarray
        minIndex = i;
        for(int var = i+1; var < size; var++)
        {
            // If present element is less than element at min_index
            // Then change min_index to present index
            if(arr[var] < arr[minIndex])
            {
                minIndex = var;
            }
        }

        // Swap the element at min_index with the first element
         swap(arr[i], arr[minIndex]);
    }
}

//INSERTION SORT
void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int current = arr[i];
        int var = i - 1;

        while (var >= 0 && arr[var] > current)
		{
			arr[var + 1] = arr[var];
			var = var - 1;
		}
		arr[var + 1] = current;

    }
}

//QUICK SORT
int partition(vector<int>& arr, int low, int high)
{
    // pivot
	int pivot = arr[high]; 
	int x = (low- 1); 

    // loop for comparing all elements with pivot element
	for (int y = low; y <= high - 1; y++) {
		
		if (arr[y] < pivot) {
			x++; 
			swap(&arr[x], &arr[y]);
		}
	}
	swap(&arr[x + 1], &arr[high]);
	return (x + 1);
}

void quickSort(vector<int>& arr, int low, int high)
{
	if (low < high) {
		
		int array_partition = partition(arr, low, high);
        
        // quick sort elements on the left recursively
		quickSort(arr, low, array_partition - 1);
		
		// quick sort elements on the right recursively
		quickSort(arr, array_partition + 1, high);
	}
}
