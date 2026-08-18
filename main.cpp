#include <string>

#include <raylib.h>

//
// @Docs:
//    + https://github.com/raysan5/raylib/wiki/Working-on-macOS
//    + https://github.com/raysan5/raylib/blob/master/examples/core/core_basic_window.c
//

const int _W = 800;
const int _H = 480;

int main(void)
{
  std::string game_motto = "IMpcuong";
  InitWindow(_W, _H, game_motto.c_str());
  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing();
    {
      ClearBackground(DARKGRAY);
      int x = _W / 2;
      int y = _H / 2;
      int font_sz = 20;
      DrawText("Congrats! First window!", x, y, font_sz /*fontSize=*/, LIGHTGRAY);
    }
    EndDrawing();
  }

  return 0;
}
