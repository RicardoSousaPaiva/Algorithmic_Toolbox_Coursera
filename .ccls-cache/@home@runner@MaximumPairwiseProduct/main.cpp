#include <iostream>
#include <vector>
#include <algorithm>

long long max_product(const  std:: vector<int>& numbers) {
    long long max = 0;
    int n = numbers.size();

    int index1=-1;
    int index2=-1;
  
    for (int i = 0; i < n; ++i) {
      
      if((index1 == -1) || (numbers[i]>numbers[index1])){
        index2=index1;
        index1=i;
     
      }
      if((index1 != i) && ((index2 == -1) || (numbers[i] > numbers[index2]))){

        index2= i; 
      }
         
    }

    max= ((long long)(numbers[index1])) *numbers[index2];
  
    return max;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    long long max= max_product(numbers);
    std::cout << max;
    return 0;
}