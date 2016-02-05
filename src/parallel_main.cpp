#include "Model.h"
#include <omp.h>
#include <iostream>

int main(int argc, char **argv){

  int thread_count=32;
  int result;
  int sum;

  #pragma omp parallel private(result), reduction(+:sum)
  {
     #pragma omp for
     for (int i = 0; i < thread_count; ++i)
     {
         Model model(i, thread_count);
         result = model.result();
         sum = sum+result;
     }
  }

  std::cout << "Final result" << sum << std::endl;

}