#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int delay=0;

class Fabric{
        int id;
        public:
        Fabric(){
                this->id = rand();
                cout << "<script src='https://cdnjs.cloudflare.com/ajax/libs/fabric.js/1.6.4/fabric.js'></script>";
                cout << "<canvas id='c"<<this->id<<"' width='600' height='500vh' style='border:1px solid #000000;float:left;'></canvas>";
                cout <<"<script>var c"<<this->id<<" = new fabric.Canvas('c"<<this->id<<"');</script>";
        }

        int drawRect(int w,int h, int l, int t,string color){
                delay = delay + 100;
                int object = rand();
                cout <<"<script>";
                cout << "setTimeout(\"";
                cout << "var o"<<object<<" = new fabric.Rect({left:"<<l<<",top:"<<t<<",width:"<<w<<",height:"<<h<<",fill:'"<<color<<"'});";
                cout << "c"<<this->id<<".add(o"<<object<<");";
                cout << "\","<<delay<<");";
                cout <<"</script>";
                return object;
        }
        int drawCircle(int r, int left, int top,string color){
                delay = delay + 100;
                int object = rand();
                cout <<"<script>";
                cout << "setTimeout(\"";
                cout << "var o"<<object<<" = new fabric.Circle({radius:"<<r<<",left:"<<left<<",top:"<<top<<",fill:'"<<color<<"'});";
                cout << "c"<<this->id<<".add(o"<<object<<");";
                cout << "\","<<delay<<");";
                cout <<"</script>";
                return object;
        }
        int drawLine(int x,int y, int x2, int y2,string color){
                delay = delay + 100;
                int object = rand();
                cout <<"<script>";
                cout << "setTimeout(\"";
                cout << "var o"<<object<<" = new fabric.Line(["<<x<<" ,"<<y<<" ,"<<x2<<" ,"<<y2<<"],{left:"<<x<<",top:"<<y<<",stroke:'"<<color<<"'});";
                cout << "c"<<this->id<<".add(o"<<object<<");";
                cout << "\","<<delay<<");";
                cout <<"</script>";
                return object;
        }


};


class Canvas{
        int id;
        public:
        Canvas(){
                this->id = rand();
                cout << "<canvas id='c"<<this->id<<"' width='400' height='200' style='border:1px solid #000000;float:left;'></canvas>";
        }

        void drawRect(int x,int y, int w, int h,string color){
                delay = delay + 34;
                cout <<"<script>";
                cout << "setTimeout(\"";
                cout <<"var c=document.getElementById('c"<<this->id<<"');";
                cout <<"var ctx=c.getContext('2d');";
                cout << "ctx.fillStyle='"<<color<<"';";
                cout <<"ctx.fillRect("<<x<<","<<y<<","<<w<<","<<h<<");";
                cout <<"ctx.stroke();";
                cout << "\","<<delay<<");";
                cout <<"</script>";
        }
        void drawLine(int x,int y, int w, int h,string color){
                delay = delay + 34;
                cout <<"<script>";
                cout << "setTimeout(\"";
                cout <<"var c=document.getElementById('c"<<this->id<<"');";
                cout <<"var ctx=c.getContext('2d');";
                cout << "ctx.strokeStyle='"<<color<<"';";
                cout <<"ctx.moveTo("<<x<<","<<y<<");";
                cout <<"ctx.lineTo("<<x+w<<","<<y+h<<");";
                cout <<"ctx.stroke();";
                cout << "\","<<delay<<");";
                cout <<"</script>";
        }

        void drawCircle(int x,int y, int r, int s,double angle,string color){
                delay = delay + 34;
                cout <<"<script>";
                cout << "setTimeout(\"";
                cout <<"var c=document.getElementById('c"<<this->id<<"');";
                cout <<"var ctx=c.getContext('2d');";
                cout << "ctx.strokeStyle='"<<color<<"';";
                cout << "ctx.beginPath();";
                cout <<"ctx.arc("<<x<<","<<y<<","<<r<<","<<s<<","<<angle<<");";
                cout <<"ctx.stroke();";
                cout << "\","<<delay<<");";
                cout <<"</script>";
        }
};