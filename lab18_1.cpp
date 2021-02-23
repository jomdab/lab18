#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *p1,Rect *p2){
	double w,h,a,b,c,d;
	double x[4] = {p1->x,p2->x,0,0};
	double y[4] = {p1->y,p2->x,0,0};
	x[2]=p1->x+p1->w;
	x[3]=p2->x+p2->w;
	y[2]=p1->y-p1->h;
	y[3]=p2->y-p2->h;
	if(x[0]>x[1]){
		a=x[0];
	}
	else{
		a=x[1];
	}
	if(x[2]>x[3]){
		b=x[3];
	}
	else{
		b=x[2];
	}
	if(y[0]>y[1]){
		c=y[1];
	}
	else{
		c=y[0];
	}
	if(y[2]>y[3]){
		d=y[2];
	}
	else{
		d=y[3];
	}
	w=b-a;
	h=c-d;
	if(w*h>0){
	return w*h;
	}
	else{
	return 0;
	}

}
