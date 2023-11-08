#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  // Checks for the number of arguments.
  if (argc < 3) {
    printf("Pass at least 2 arguments\n");
    return 1;
  }

  // Passing the first and second argument in a variable for better readability.
  // "atoi" function casts the argument (which is of type string) to an integer (ASCII TO Integer).
  int startingNo = atoi(argv[1]);
  int endingNo = atoi(argv[2]);

  // max_Seq is the variable that holds the maximum sequence found in the range given.
  // max_Seq_temp is a temporary variable that holds the maximum sequence on the current number. In the end this too are compared and replaced if needed.
  int max_Seq = 1, max_Seq_temp = 1;

  // currentNo holds the number at any specific time and gets processed in the Collatz Manipulation
  long currentNo = 0;
  
  // Check the range of the arguments given.
  if (startingNo < 1 || endingNo > 100000000 || startingNo > endingNo) {
    printf("0\n");
    return 1;
  }

  // Assign startingNo to currentNo. Infront of startingNo there is a casting "(long)", that alters the startingNo from integer to long integer.
  currentNo = (long)startingNo;

  // While loop through every number in the range@
  while (startingNo <= endingNo) {

    // While loop through The Collatz Sequence of the current Number@
    while (currentNo != 1) {
      
      // Collatz Manipulation
      // For An Even Number!
      if (currentNo % 2 == 0) {
        currentNo = currentNo / 2;
      // For An Odd Number!
      } else {
        currentNo = currentNo * 3 + 1;
      }

      // Increment max_Seq_temp by one.
      max_Seq_temp++;
      
    }

    // Increment startingNo by one.
    startingNo++;
    // And assign it to currentNo again (through casting).
    currentNo = (long)startingNo;

    // Check which max_Seq is greater. In case that the current max_Seq_temp is greater, assign the number to max_Seq.
    if (max_Seq_temp > max_Seq) {
      max_Seq = max_Seq_temp;
    }

    // Revert max_Seq_temp to 1, for the next currentNo manipulation.
    max_Seq_temp = 1;
    
  }

  // Print the maximum collatz sequence found in the range given
  printf("%d\n", max_Seq);
  
  return 0;
}
