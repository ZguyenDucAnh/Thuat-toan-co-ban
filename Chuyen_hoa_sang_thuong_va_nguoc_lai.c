#include <stdio.h>

int main() {
  char string[] = "heLLo, woRLd!";
  int i;

  // Duyệt qua từng ký tự của chuỗi
  for (i = 0; string[i] != '\0'; i++) {
    // Nếu ký tự là chữ thường
    if (string[i] >= 'a' && string[i] <= 'z') {
      // Chuyển nó thành chữ hoa
      string[i] -= 32;
    }
    else
    {
    	if(string[i] >= 'A' && string[i] <= 'Z')
    	{
    		string[i] += 32;
		}
	}
  }

  // In ra chuỗi sau khi được chuyển đổi
  printf("Chuoi sau duoc chuyen doi la: %s\n", string);

  return 0;
}
