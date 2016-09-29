#include<string>
#include<canvas.h> // biblioteca para udpiler
using namespace std;

class Cabeza{
protected: 
    int r;
    int offx;
    int offy;
    string color;
    Canvas *c;
public:
    Cabeza(int radio,Canvas *c,int offx,int offy){
        this->c = c;
        this->r = radio;
        this->offx =offx;
        this->offy =offy;
        this->color="black";
        c->drawCircle(200+offx,100+offy,this->r,0,3.14*2,this->color);
        c->drawCircle(220+offx,90+offy,this->r/4,0,3.14*2,this->color); //ojo
        c->drawCircle(180+offx,90+offy,this->r/4,0,3.14*2,this->color); //ojo
        c->drawCircle(200+offx,120+offy,this->r/4,0,3.14*2,this->color); //boca
    }
    void setColor(string s){
        color=s;
    }
    string getColor(){
        return color;
    }
    void setCanvas(Canvas *c){
        this->c=c;
    }
    int getRadius(){
        return this->r;
    }
};

class cabezaRaton:public Cabeza{
public:
    cabezaRaton(int radio,Canvas *c,int offx,int offy):Cabeza( radio,c,offx,offy){
        c->drawCircle(160+offx,60+offy,this->r/2,0,3.14*2,this->color);
        c->drawCircle(240+offx,60+offy,this->r/2,0,3.14*2,this->color);
    }
};
class cabezaRatonFeo:public Cabeza{
public:
    cabezaRatonFeo(int radio,Canvas *c,int offx,int offy):Cabeza( radio,c,offx,offy){
        c->drawLine(220+offx,70+offy,-20,10,this->color);
        c->drawLine(180+offx,70+offy,20,10,this->color);
        c->drawCircle(160+offx,60+offy,this->r/2,0,3.14*2,this->color);
        c->drawCircle(240+offx,60+offy,this->r/2,0,3.14*2,this->color);
    }
};
int main()
{
    Canvas *def = new Canvas();
    Cabeza *mickey;
    Cabeza *mickey2;
    mickey2 = new cabezaRatonFeo(40,def,100,40); 
    mickey = new cabezaRaton(40,def,-100,-20);
    return 0;
}

