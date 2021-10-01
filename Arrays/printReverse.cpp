<<<<<<< HEAD
#include <iostream>
using namespace std;

void printReverse(int* arr, int size) {
    for(int i = size - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
}

int main() {
	int testCases;
	cin >> testCases;
	
	while(testCases--) {
	    int size;
	    cin >> size;
	
	    int arr[size];
	    for(int i = 0; i < size; i++) {
	        cin >> arr[i];
	    }

	    printReverse(arr, size);
	}
	return 0;
}
=======
#include <iostream>
using namespace std;

void printReverse(int* arr, int size) {
    for(int i = size - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
}

int main() {
	int testCases;
	cin >> testCases;
	
	while(testCases--) {
	    int size;
	    cin >> size;
	
	    int arr[size];
	    for(int i = 0; i < size; i++) {
	        cin >> arr[i];
	    }

	    printReverse(arr, size);
	}
	return 0;
}
>>>>>>> 851ab44f1df07037ed245cc6101d6060bc0628a2
