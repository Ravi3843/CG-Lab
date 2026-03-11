#include <graphics.h>
#include <conio.h>

int main(){

 int gd = DETECT, gm;
 initgraph(&gd, &gm, "");

 line(100, 0, 200, 0);
 rectangle(100, 100, 300, 200);
  setcolor(RED);
  circle(200, 200, 50);

  putpixel(100, 100, RED);
  putpixel(100, 200, GREEN);
  putpixel(300, 100, BLUE);
  putpixel(300, 200, YELLOW);
 getch();
 closegraph();
 
return 0;
}
