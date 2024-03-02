#include<iostream>
#include<graphics.h>

main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");						
	//background
	setfillstyle(1,4);
	floodfill(100,100,8);	

	//shadow
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(280,250,170,150);							 

	//outerBody
	setcolor(0); //black line
	circle(320,240,161);
	circle(320,240,162);

	setcolor(8); //darkgray outer color
	circle(320,240,160);
	setfillstyle(1,8);
	floodfill(321,241,8);
	
	//innerBody
	setcolor(15); //white line
	circle(320,240,150);

	setfillstyle(1,7); //inner light gray fill
	floodfill(321,241,15); 
	setfillstyle(1,5);
	setcolor(0); //inner black line
	circle(320,240,149);
	circle(320,240,148);

	//numbers 
	setbkcolor(7);
	setcolor(0);
	settextstyle(10,0,5);
	outtextxy(190,223, "9"); //mid
	outtextxy(235,120, "11");//left
	outtextxy(195,165, "10");	
	
	outtextxy(300,100, "12"); //topmid
	outtextxy(370,120, "1"); //right 
	outtextxy(412,165, "2"); 
	
	outtextxy(425,223, "3"); //mid
	outtextxy(410,285, "4"); //botright 
	outtextxy(362,328, "5"); 
	
	outtextxy(305,340, "6"); //botmid
	outtextxy(250,328, "7"); //botleft
	outtextxy(205,285, "8"); 
	
	//circle_design
	circle(320,240,2); 
	
	//For long line numbers
	line(320,240,415,240); //3
	//other numbers
	/*	line(320,240,400,290); //4
		line(320,240,365,320); //5
		line(320,240,320,335); //6
		
		line(320,240,275,320); //7
		line(320,240,240,290); //8
		line(320,240,225,240); //9
		
		line(320,240,245,185); //10
		line(320,240,280,155); //11
		line(320,240,320,145);  //12
		
		line(320,240,370,160); //1
		line(320,240,400,195); //2
	*/

	//For short line numbers
	line(320,240,380,275); //4
	//other numbers
	/*	line(320,240,390,240); //3
		line(320,240,355,300); //5
		line(320,240,320,310); //6
		
		line(320,240,290,300); //7
		line(320,240,260,275); //8
		line(320,240,250,240); //9
		
		line(320,240,260,205); //10
		line(320,240,285,180); //11
		line(320,240,320,170);  //12
		
		line(320,240,360,185); //1
		line(320,240,380,210); //2
	*/
	settextstyle(10,0,1);
	setbkcolor(4);
	setcolor(15);
	outtextxy(10, 5, "Clock");
	getch();
	closegraph();
	return 0;
}
