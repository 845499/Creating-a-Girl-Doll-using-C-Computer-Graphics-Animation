#include<graphics.h>
#include<stdio.h>

int main()
{
    int gd=DETECT,gm,
	points1[]={335,128,305,112,305,114,305,156,305,156,335,128},
	points2[]={328,128,350,109,350,109,350,153,350,165,328,135};

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,(char*)"");
    
    setbkcolor(15);
    cleardevice();
    
    setcolor(0);
    int skin=RGB(236, 188, 180); 
	int a=RGB(241,204,143);
	int pink = RGB(255,105,180);
	
	arc(257,90,236,334,80); //left hair
	setfillstyle(SOLID_FILL,a);
	floodfill(300,100,0);
	arc(400,90,205,267,82); //right hair

	circle(300,200,100); //face
	setfillstyle(SOLID_FILL,skin);
	floodfill(300,200,0);
	setcolor(BLACK);
    arc(265,205,45,150,20);                 //Eyebrow Right    
    setcolor(BLACK);        
    arc(335,205,45,150,20);                 //Eyebrow left
	ellipse(265,205,0,360,6,10); //Left eye
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(266,205,0);
	ellipse(335,205,0,360,6,10); //right eye
	floodfill(336,205,0);
	setcolor(BLACK);
    ellipse(300,241, 220, 320, 58, 29);
    ellipse(300,241, 220, 320, 58, 30);
    ellipse(300,241, 220, 320, 58, 31);
    ellipse(300,241, 220, 320, 58, 32);
	setcolor(0);
	arc(195,190,50,295,15); //left ear 
	setcolor(0);
	arc(405,190,250,128,15); //right
	setfillstyle(SOLID_FILL,skin);
	floodfill(195,190,0);
	floodfill(405,195,0);
	setfillstyle(SOLID_FILL, skin);
	int n[] = {270,295,270,315,330,315,330,295};
	fillpoly(4,n);	
	setfillstyle(SOLID_FILL,a);
	floodfill(218,295,0);
	floodfill(382,295,0);
	line(214,248,214,315); 
	line(385,248,385,315);
	line(215,315,385,315);//bottom hairline 
	
	//blush
	setcolor(0);
    fillellipse(240,238,18,12);//left
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(241,239,0);
    
    fillellipse(360,238,18,12);//right
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(394,276,0);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(100,100,0);
	
	//clip
	setfillstyle(SOLID_FILL,pink);
    fillpoly(4,points1);
    fillpoly(4,points2);
    
    setcolor(0);
    circle(328,132,10);
    setfillstyle(SOLID_FILL,pink);
    floodfill(325,130,0);
    
	getch();
	closegraph();
	return 0;
}
