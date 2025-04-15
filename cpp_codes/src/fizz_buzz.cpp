#include <iostream>
#include <string>

void fizz_buzz(int num) {
    std::string answer = "";
    if(num % 3 == 0) answer += "Fizz";
    if(num % 5 == 0) answer += "Buzz";
    if(num % 3 != 0 && num % 5 != 0) answer += std::to_string(num);
    std::cout << answer << std::endl;
}

int main() {
    fizz_buzz(3);
    fizz_buzz(5);
    fizz_buzz(15);
    fizz_buzz(1);
  return 0;
}