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

  struct pixel_pos
  {
    int x;
    int y;
  };
  const auto start = pixel_pos{0, 0};
  const auto end   = pixel_pos{_W, _H};

  while (!WindowShouldClose())
  {
    BeginDrawing();
    {
      ClearBackground(DARKGRAY);
      int font_sz = 20;
      for (int x = start.x; x < end.x; x += font_sz)
      {
        for (int y = start.y; y < end.y; y += font_sz)
        {
          if (x == y)
            DrawText("Congrats! First window!", x, y, font_sz /*fontSize=*/, LIGHTGRAY);
        }
      }
    }
    EndDrawing();
  }

  return 0;
}
