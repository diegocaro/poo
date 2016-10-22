#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Enumerations.H>
#include <FL/fl_draw.H>
#include <FL/x.H>

class My_Box : public Fl_Box {
  void draw() {
    fl_color(FL_BLACK);
    int x1 = x(),       y1 = y();
    int x2 = x()+w()-1, y2 = y()+h()-1;
    fl_line(x1, y1, x1, y2);
    fl_line(x1, y2, x2, y2);
    fl_rect(x1+10, y2-110, 100, 100);
    fl_color(FL_RED);
    fl_circle(x1+10,y2-110,3);
    fl_circle(x1+110,y2-10,3);
  }
public: 
  My_Box(int x, int y, int w, int h, const char *l=0) : Fl_Box(x,y,w,h,l){}
};

int main(int argc, char **argv) {
  Fl_Window window(400,400);
  My_Box box(50,50,300,300);
  window.end();
  window.show(argc, argv);
  return Fl::run();
}