#include <MeggyJrSimple.h>

/*
struct Point
{
 int x;
 int y;

};

Point p1 = {2, 0};
Point p2 = {3, 0};
Point p3 = {1, 1};
Point p4 = {2, 1};
Point p5 = {3, 1};
Point p6 = {1, 2};
Point p7 = {2, 2};
Point p8 = {3, 2};
Point p9 = {1, 3};
Point p10 = {2, 3};
Point p11 = {3, 3};
Point p12 = {2, 4};
Point p13 = {3, 4};
Point p14 = {3, 5};

Point p15 = {4, 0};
Point p16 = {5, 0};
Point p17 = {4, 1};
Point p18 = {5, 1};
Point p19 = {6, 1};
Point p20 = {4, 2};
Point p21 = {5, 2};
Point p22 = {6, 2};
Point p23 = {4, 3};
Point p24 = {5, 3};
Point p25 = {6, 3};
Point p26 = {4, 4};
Point p27 = {5, 4};
Point p28 = {4, 5};

Point LeftEggArray[64] = 
{
  p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14
};

Point RightEggArray[64] = 
{
  p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28
};

int marker = 28;

*/

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();   // Required code, line 2 of 2.
  Serial.begin(9600);
}

void loop()                     // run over and over again
{     
  start();
    DisplaySlate();
    delay(500);
  eggjump();
    DisplaySlate();
     delay(500);
  start();
    DisplaySlate();
    delay(500);
  eggjump();
    DisplaySlate();
     delay(500); 
  eggjump();
    DisplaySlate();
     delay(500);  
  adolescent();
    DisplaySlate();
     delay(500);
  
  
  /*
   splitegg();
    delay(500);
    DisplaySlate();
  
  for (int m=0; m<14; m++)//m is the number of points in the array
  {
     LeftEggArray[m].x--; //moving the blob to the left, off the screen
  }
  for (int n=0; n<14; n++)
  {
     RightEggArray[n].x++;
  }
  */
  

}

void start()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(2, 0, White);
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(5, 0, White);
  DrawPx(1, 1, White);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(5, 1, White);
  DrawPx(6, 1, White);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, White);
  DrawPx(6, 2, White);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, White);
  DrawPx(2, 4, White);
  DrawPx(3, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(3, 5, White);
  DrawPx(4, 5, White);
}

/*
void splitegg()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  for (int l=0; l<14; l++)
  {
    DrawPx(LeftEggArray[l].x, LeftEggArray[l].y, White);
  }//thank you elana for helping me compress my code with i!!!
  for (int r=0; r<14; r++)
  {
    DrawPx(RightEggArray[r].x, RightEggArray[r].y, White);
  }
}
*/


void eggjump()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(5, 1, White);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, White);
  DrawPx(6, 2, White);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, White);
  DrawPx(1, 4, White);
  DrawPx(2, 4, White);
  DrawPx(3, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(6, 4, White);
  DrawPx(2, 5, White);
  DrawPx(3, 5, White);
  DrawPx(4, 5, White);
  DrawPx(5, 5, White);
  DrawPx(3, 6, White);
  DrawPx(4, 6, White);
}


/*
void hatchedegg()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(2, 0, White);
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(5, 0, White);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
}

void nomoreshell()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
}
*/

void adolescent()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, Yellow);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
  DrawPx(1, 2, Yellow);
  DrawPx(2, 2, Yellow);
  DrawPx(3, 2, Yellow);
  DrawPx(4, 2, Yellow);
  DrawPx(5, 2, Yellow);
  DrawPx(2, 3, Yellow);
  DrawPx(3, 3, Yellow);
  DrawPx(4, 3, Yellow);
  DrawPx(5, 3, Yellow);
  DrawPx(4, 4, Yellow);
  DrawPx(5, 4, Yellow);
  DrawPx(6, 4, Yellow);
  DrawPx(4, 5, Yellow);
  DrawPx(5, 5, Yellow);
}

void adult()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, Red);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, Yellow);
  DrawPx(1, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(4, 5, Red);
  DrawPx(5, 5, Red);
}

void sittingadult()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(2, 0, Orange);
  DrawPx(3, 0, Orange);
  DrawPx(4, 0, Orange);
  DrawPx(1, 1, Orange);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(5, 1, Red);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, White);
  DrawPx(6, 2, Yellow);
  DrawPx(1, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
}


void eggbeinglaid()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(1, 1, White);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, Red);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, Yellow);
  DrawPx(1, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(4, 5, Red);
  DrawPx(5, 5, Red);
}

void eggislaid()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(0, 0, White);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, Red);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, Yellow);
  DrawPx(1, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(4, 5, Red);
  DrawPx(5, 5, Red);
}

void laidegghatches()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(0, 0, Yellow);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, Red);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, Yellow);
  DrawPx(1, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(4, 5, Red);
  DrawPx(5, 5, Red);
}

void food()

{
  DrawPx(6, 0, Green);
  DrawPx(7, 0, Green);
}

void Water()

{
  DrawPx(6, 0, Blue);
  DrawPx(7, 0, Blue);
}




/* 
pseudocode 


intro:
have egg fall from sky????
*insert some cute tune*
after delay, have egg "jump up and down"
egg halves seperate and move offscrean with chick in middle 
chick turns left, then right again
*insert some chick-like noises*
*transition noises*
screen gradually turns black
new slate with smaller version of chick 
a button is food
b button is water 
can only feed the chick every 15 sec
can only water the chick every 20 sec
after 3 foods and 2 waters chick will become bigger
adolescent chicken moves around (different from baby version) 
after 6 foods and 5 waters chick will become adolescent 
adolescent chicken moves around 
after 9 foods and 8 waters chick will become an adult 

how to save??? idkkkkk

*/ 








