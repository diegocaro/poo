#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_window.H>
#include <FL/Fl_Button.H>
using namespace std;

void button_cb( Fl_Widget*, void* );  

void make_window()
{
   Fl_Window* win= new Fl_Window( 100,100, "Button Toggle" );
   win->begin();  
      Fl_Button* but = new Fl_Button( 30, 30, 40, 40, "ON" );
   win->end();
   but -> callback( ( Fl_Callback* ) button_cb );
   win->show();
}

void button_cb( Fl_Widget* obj , void* )
{
   fprintf(stderr, "%s\n", obj->label()); // Debug
   if(strcmp(obj->label(),"ON") == 0)
      obj->label("OFF"); 
   else
      obj->label("ON");

   obj->redraw();
}

int main( int argc, char* argv[] )
{
   make_window();
   return Fl::run();
}
