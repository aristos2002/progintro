#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  if (argc < 3) {
    printf("Pass at least 2 arguments\n");
    return 1;
  }
  
  int startingNo = atoi(argv[1]);
  int endingNo = atoi(argv[2]);
  int max_Seq = 1, max_Seq_temp = 1;
  long currentNo = 0;
  
  // Check the range
  if (startingNo < 1 || endingNo > 100000000) {
    printf("0\n");
    return 1;
  }

  currentNo = (long)startingNo;

  while (startingNo <= endingNo) {
    
    while (currentNo != 1) {
      // Collatz Manipulation
      if (currentNo % 2 == 0) {
        currentNo = currentNo / 2;
      } else {
        currentNo = currentNo * 3 + 1;
      }
      max_Seq_temp++;
    }

    startingNo++;
    currentNo = (long)startingNo;
    
    if (max_Seq_temp > max_Seq) {
      max_Seq = max_Seq_temp;
    }
    
    max_Seq_temp = 1;
    
  }
  printf("%d\n", max_Seq);
  return 0;
}
