#include <iostream>

void christmas_tree(int rows) {
  for (int i {}; i < rows; ++i){
    for (int j = rows - i; j > 0; j--){
      std::cout << ' ';
    }
    for (int k {}; k < 2 * i + 1; ++k){
      std::cout << '*';
    }
    std::cout << '\n';
  }
}

int main() {
  christmas_tree(10);
  return 0;
}