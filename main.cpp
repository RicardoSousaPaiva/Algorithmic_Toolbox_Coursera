#include <iostream>
#include <vector>
#include <algorithm>

long long max_product(std:: vector<int>& numbers){

  long long max_last=0;
  int n= numbers.size();
  int max1=-1;
  int max2=-1;


  for(int i=0; i < n; ++i){

    if((max1 == -1) || numbers[i] > numbers[max1]){

      max2= max1;

      max1=i;
      
    }

    if((max1 != i) && ((max2 == -1) || (numbers[i]) > numbers[max2])){

      max2=i;
      
    }
    
  }

  max_last= ((long long)(numbers[max1]))* numbers[max2];

  return max_last;

  
}

int main(){

  int n;
  long long max;
  
  std::cin >> n;

  std::vector<int> numbers(n);

  for(int i=0; i < n; ++i){
    
    std::cin >> numbers[i];
  
  }
  max= max_product(numbers);

  std::cout << max;

  return 0;
  
}