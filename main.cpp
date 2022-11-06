#include <iostream>
#include <vector>

enum CellTypes {
  FLOOR = 0,
  WALL = 1,
};

void draw_maze(const std::vector<int>& the_world, int w, int h) {
  int index = 0;
  for (size_t row = 0; row < h; row++) {
    for (size_t column = 0; column < w; column++, index++) {
      if (the_world[index] == FLOOR) {
        std::cout << ".";
      } else if (the_world[index] == WALL) {
        std::cout << "X";
      }
    }
    std::cout << "\n";
  }
};

int main() {
  int width = 64;
  int height = 20;

  std::vector<int> world(width * height);
  world[8 * width + 15] = WALL;

  draw_maze(world, width, height);

  return 0;
}
