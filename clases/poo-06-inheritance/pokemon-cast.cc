#include<iostream>
#include<string>
#include<canvas.h> // biblioteca para udpiler

using namespace std;
class Pokemon{
protected: 
    int r;
    int offx;
    int offy;
    string color;
    int hp;
    Canvas *c;
public:
    Pokemon(int radio,Canvas *c,int offx,int offy){
        this->c = c;
        this->hp=100;
        this->r = radio;
        this->offx =offx;
        this->offy =offy;
        this->color="blue";
        c->drawCircle(offx,offy,this->r,0,3.14*2,this->color);
        c->drawCircle(20+offx,offy-10,this->r/4,0,3.14*2,this->color); //ojo
        c->drawCircle(offx-20,offy-10,this->r/4,0,3.14*2,this->color); //ojo
        c->drawCircle(offx,+offy+20,this->r/4,0,3.14*2,this->color); //boca
    }
    void setCanvas(Canvas *c){
        this->c=c;
    }
    int damage(int d){
        this->hp = this->hp -d;
    }
    bool attack(Pokemon *p){
        p->damage(10);
    }
    int getHp(){
        return hp; 
    }
};

class Eevee: public Pokemon{
public:
    Eevee(int radio,Canvas *c,int offx,int offy):Pokemon( radio,c, offx, offy){
        c->drawLine(offx-20,offy-radio+5,10,-20,this->color);
        c->drawLine(offx-20+10,offy-radio+5-20,10,20,this->color);
        c->drawLine(offx,offy-radio+5,10,-20,this->color);
        c->drawLine(offx+10,offy-radio+5-20,10,20,this->color);
    }
    bool attack(Pokemon *p){
        p->damage(20);
    }
};

class Pikachu: public Pokemon{
public:
    Pikachu(int radio,Canvas *c,int offx,int offy):Pokemon( radio,c, offx, offy){
        c->drawLine(offx-25,offy-radio+5,10,-20,this->color);
        c->drawLine(offx-25+10,offy-radio+5-20,10,20,this->color);
        c->drawLine(offx+5,offy-radio+5,10,-20,this->color);
        c->drawLine(offx+10+5,offy-radio+5-20,10,20,this->color);

        c->drawLine(offx+radio,offy,10,20,this->color);
        c->drawLine(offx+radio+10,offy+20,10,-20,this->color);
        c->drawLine(offx+radio+10+10,offy+20-20,10,20,this->color);
    }
    bool attack(Pokemon *p){
        p->damage(30);
        c->drawCircle(offx,offy,this->r,0,3.14*2,this->color);
  
    }
};
int main()
{

    Canvas *def = new Canvas();
    Pokemon *a;
    Pokemon *b;

    a= new Pikachu(40,def,100,100); 
    b= new Eevee(40,def,300,100); 

    ((Eevee *)a)->attack(b);

    cout <<a->getHp()<<endl; 
    cout <<b->getHp()<<endl; 

    return 0;
}

