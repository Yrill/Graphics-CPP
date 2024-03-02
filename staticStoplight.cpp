#include<iostream>
#include<graphics.h>

main(){
	initwindow(1000, 785);
	//outer_stoplight
	rectangle(250,90,330,300);
	//other details
	setcolor(15);
	rectangle(265,80,315,90);  //upper_rec
	rectangle(275,70,305,80); //upper_small_rec
	rectangle(275,700,305,710); //lower_small_rec
	rectangle(265,710,315,720); //lower_rec
	rectangle(285,300,295,700); //stand
	line(300, 785, 900, 250); //road
	line(0, 250, 250, 250);
	line(330, 250, 900, 250);
	line(970, 400, 1030, 320); //road_white
	line(970, 400, 1010, 400);
	line(900, 580, 1010, 580);
	line(750, 785, 900, 580);
	line(0, 180, 250, 180); //building_start
	line(330, 180, 1000, 180);
	//buildings
	line(0, 170, 250, 170);
	line(330, 170, 1000, 170);
	rectangle(1,30,150,170);
	line(350, 45, 350, 170);
	rectangle(350,50,650,170);
	rectangle(750,30,1000,170);
	rectangle(745,25,1000,30);
	//buildings_details
	rectangle(440,60,600,81); //cafe
	rectangle(350,45,655,50); 
	settextstyle(5,0,1);
	setbkcolor(13);
	outtextxy(452, 61, "Cafe 'N Drinks");
	rectangle(370,110,400,170); //cafedoor
	rectangle(420,90,625,150);
	rectangle(418,88,627,152);
	rectangle(10,110,40,170); //door
	rectangle(60,100,80,140); //windows
	rectangle(100,100,120,140); //windows
	rectangle(1,85,150,90);
	rectangle(10,40,60,75); //windows
	rectangle(90,40,140,75); //windows	
	rectangle(200,100,250,170); //door
	rectangle(150,40,352,45);
	rectangle(800,80,850,150); //door
	rectangle(790,150,860,160); //steps
	rectangle(780,160,870,170); 
	rectangle(890,50,1010,120); //windows	
	rectangle(885,120,1010,125); //windows	
	
	//rectangle fill
	setfillstyle(1,1);
	floodfill(251,91,15); //mid_rec
	floodfill(266,81,15); //upper_rec
	floodfill(276,71,15); //upper_small_rec
	floodfill(276,701,15); //lower_small_rec
	floodfill(266,711,15); //lower_rec
	floodfill(286,301,15); //stand

	setfillstyle(1,2);	//line
	floodfill(0,371,15); 
	floodfill(2,171,15);
	floodfill(331,171,15);
	setfillstyle(1,15);	//road_white
	floodfill(901,581,15);
	floodfill(972,399,15);
	setfillstyle(1,8);	//road
	floodfill(1,191,15);
	floodfill(331,191,15);
	
	//building
	setfillstyle(1,1); //1
	floodfill(2,31,15);
	floodfill(2,91,15);
	
	setfillstyle(1,4); //2
	floodfill(151,51,15);
	
	setfillstyle(1,3); //3
	floodfill(351,61,15); 
	
	setfillstyle(1,8); 
	floodfill(751,50,15); //4
	
	setfillstyle(1,6); //doors
	floodfill(11,111,15); 
	floodfill(201,101,15); 
	floodfill(801,81,15); 
	floodfill(886,121,15);
	floodfill(2,86,15); //brownDesign
	floodfill(151,41,15);
	floodfill(351,46,15);	
	floodfill(746,26,15);	

		
		
	setfillstyle(1,15); //windows
	floodfill(61,101,15);
	floodfill(101,101,15);
	floodfill(11,41,15);
	floodfill(91,41,15);
	floodfill(421,91,15);
	floodfill(891,51,15);
	
	setfillstyle(1,13); //cafe
	floodfill(419,89,15);
	floodfill(371,111,15);	
	floodfill(441,61,15); //banner

	setfillstyle(1,7); //steps
	floodfill(791,151,15);	
	floodfill(781,161,15);	
	
	setfillstyle(1,11); //lightblue
	floodfill(151,32,15); 

	//lights
	//red
	setcolor(4);
	circle(290,130,25);
	setfillstyle(1,4);
	floodfill(290,130,4);

	//yellow
	setcolor(14);
	circle(290,195,25);
	setfillstyle(1,14);
	floodfill(290,195,14);
	
	//green
	setcolor(2);
	circle(290,260,25);
	setfillstyle(1,2);
	floodfill(290,260,2);

	//Text
	settextstyle(10,0,1);
	setbkcolor(11);
	setcolor(2);
	outtextxy(10, 5, "Stop Light");

	getch();
	closegraph();
	return 0;
}
