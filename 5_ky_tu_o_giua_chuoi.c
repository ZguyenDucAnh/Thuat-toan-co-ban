#include <stdio.h>
#include <string.h>
int main() {
  char str[21];

  // Prompt the user to enter a string
  printf("Enter a string with an odd number of characters between 5 and 20: ");
  scanf("%20s", str);

  // Check if the string is valid
  int len = strlen(str);
  if (len % 2 != 1 || len < 5 || len > 20) {
    printf("Invalid string.\n");
    return 1;
  }

  // Calculate the middle of the string
  int mid = len / 2;

  // Display the middle 5 characters of the string
  printf("The middle 5 characters are: ");
  for (int i = mid - 2; i <= mid + 2; i++) {
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}
