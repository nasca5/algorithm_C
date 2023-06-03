#include <iostream>
#include <vector>

void sort_list(int data[], int size) {
  for(int i = 1; i < size; i++) {
    for(int j = 0; j < size - i; j++) {
      if(data[j] > data[j + 1]) {
        int temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
      
    }
  }
}

int main() {
  int s[10] = {1, 9, 8, 5, 4, 6, 7, 3, 2, 10};
  sort_list(s, 10);

  for(int num : s) {
    std::cout << num << " ";
  }
  return 0;
}
