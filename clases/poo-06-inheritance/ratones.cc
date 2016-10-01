#include<string>
#include<canvas.h> // biblioteca para udpiler
using namespace std;

class Cabeza{
protected: 
    int r_;
    int offx_;
    int offy_;
    string color_;
public:
    Cabeza(Canvas &c,int radio,int offx,int offy) {
        r_ = radio;
        offx_ =offx;
        offy_ =offy;
        color_="black";
        c.drawCircle(200+offx_, 100+offy_, r_,   0, 3.14*2, color_);
        c.drawCircle(220+offx_,  90+offy_, r_/4, 0, 3.14*2, color_); //ojo
        c.drawCircle(180+offx_,  90+offy_, r_/4, 0, 3.14*2, color_); //ojo
        c.drawCircle(200+offx_, 120+offy_, r_/4, 0, 3.14*2, color_); //boca
    }
    void set_color(string s){
        color_=s;
    }
    string color(){
        return color_;
    }
    int radius(){
        return r_;
    }
};

class CabezaRaton: public Cabeza {
public:
    CabezaRaton(Canvas &c, int radio, int offx, int offy) : 
        Cabeza(c, radio, offx, offy) {
        c.drawCircle(160+offx_, 60+offy, r_/2, 0, 3.14*2, color_);
        c.drawCircle(240+offx_, 60+offy, r_/2, 0, 3.14*2, color_);
    }
};
class CabezaRatonFeo:public Cabeza{
public:
    CabezaRatonFeo(Canvas &c, int radio,int offx,int offy) : 
        Cabeza(c, radio, offx, offy) {
        c.drawLine(220+offx_,   70+offy_, -20, 10, color_);
        c.drawLine(180+offx_,   70+offy_, 20,  10, color_);
        c.drawCircle(160+offx_, 60+offy_, r_/2, 0,3.14*2, color_);
        c.drawCircle(240+offx_, 60+offy_, r_/2, 0,3.14*2, color_);
    }
};

int main() {
    Canvas def;
    Cabeza head(def, 40, -100, -20);
    CabezaRatonFeo mickey(def, 40, 100, 40); 
    CabezaRaton mickey2(def, 40, 000, 20);
    
    return 0;
}

