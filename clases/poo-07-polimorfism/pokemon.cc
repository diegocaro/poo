#include<iostream>
#include<string>
#include<canvas.h> // biblioteca para udpiler

using namespace std;
class Pokemon{
protected: 
    int r_;
    int offx_;
    int offy_;
    string color_;
    int hp_;
    Canvas &c_;
public:
    Pokemon(Canvas &c, int radio,int offx,int offy) :
        c_(c)
    {
        hp_=100;
        r_ = radio;
        offx_ = offx;
        offy_ = offy;
        color_ = "blue";
        c_.drawCircle(offx_,offy_,r_,0,3.14*2,color_);
        c_.drawCircle(20+offx_,offy_-10,r_/4,0,3.14*2,color_); //ojo
        c_.drawCircle(offx_-20,offy_-10,r_/4,0,3.14*2,color_); //ojo
        c_.drawCircle(offx_,+offy_+20,r_/4,0,3.14*2,color_); //boca
    }

    int damage(int d){
        hp_ -= d;
    }
    bool attack(Pokemon &p){
        p.damage(10);
    }
    int hp(){
        return hp_; 
    }
};

class Eevee: public Pokemon {
public:
    Eevee(Canvas &c, int radio,int offx,int offy):
    Pokemon( c, radio, offx, offy){
        c_.drawLine(offx_-20,offy_-radio+5,10,-20,color_);
        c_.drawLine(offx_-20+10,offy_-radio+5-20,10,20,color_);
        c_.drawLine(offx_,offy_-radio+5,10,-20,color_);
        c_.drawLine(offx_+10,offy_-radio+5-20,10,20,color_);
    }
    bool attack(Pokemon &p){
        p.damage(20);
    }
};

class Pikachu: public Pokemon {
public:
    Pikachu(Canvas &c, int radio, int offx,int offy)
        :Pokemon(c, radio, offx, offy){
        c_.drawLine(offx_-25, offy_-r_+5,10,-20,color_);
        c_.drawLine(offx_-25+10,offy_-r_+5-20,10,20,color_);
        c_.drawLine(offx_+5, offy_-r_+5,10,-20,color_);
        c_.drawLine(offx_+10+5,offy_-r_+5-20,10,20,color_);

        c_.drawLine(offx_+r_,offy_,10,20,color_);
        c_.drawLine(offx_+r_+10,offy_+20,10,-20,color_);
        c_.drawLine(offx_+r_+10+10,offy_+20-20,10,20,color_);
    }
    bool attack(Pokemon &p){
        p.damage(30);
        c_.drawCircle(offx_+150,offy_,r_/2,0,3.14*2,"red");
    }
};
int main()
{

    Canvas def;
    Pikachu a(def, 40, 100, 100);
    Eevee b(def, 40,300,100); 


    a.attack(b);

    cout << "HP pokeomn a: " << a.hp() << endl; 
    cout << "HP pokemon b:" << b.hp() << endl; 

    return 0;
}

