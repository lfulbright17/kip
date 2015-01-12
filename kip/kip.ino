#include <MeggyJrSimple.h>

int level = 1; //level 1 is intro through adolescent
int state = 0; //no buttons being pressed
int food1xcoord = 6; //drawing half the food for the adolesent 
int food1ycoord = 0; //drawing other of half of the food for the adolescent
int food2xcoord = 7; //drawing half the food for the adult
int food2ycoord = 0; //drawing other half of the food for the adult
int water1xcoord = 6; //drawing half the water for the adolesent 
int water1ycoord = 0; //drawing other half of the water for the adolesent
int water2xcoord = 7; //drawing half the water for the adult
int water2ycoord = 0; //drawing other half of the water for the adult
int foodscore = 3; //amount of times A button must be pressed to become adult
int waterscore = 3; //amount of times B button must be pressed to become adult
int foodscore2 = 5; //amount of times A button must be pressed to lay an egg
int waterscore2 = 5 ; //amount of times B button must be pressed to lay an egg
int lights = 2;

struct Point
{
 int x;
 int y;
}; //points that draw the "ghost chicken" that ascends 

Point p1 = {3, 0};
Point p2 = {2, 1};
Point p3 = {3, 1};
Point p4 = {4, 1};
Point p5 = {1, 2};
Point p6 = {2, 2};
Point p7 = {3, 2};
Point p8 = {4, 2};
Point p9 = {5, 2};
Point p10 = {1, 3};
Point p11 = {2, 3};
Point p12 = {3, 3};
Point p13 = {4, 3};
Point p14 = {5, 3};
Point p15 = {1, 4};
Point p16 = {4, 4};
Point p17 = {5, 4};
Point p18 = {6, 4};
Point p19 = {4, 5};
Point p20 = {5, 5};
Point p21 = {4, 6};
Point p22 = {5, 6};

Point GoodbyeArray[64] = 
{
  p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22
};

int marker = 22;

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();   // Required code, line 2 of 2.
  Serial.begin(9600);
  start(); 
  start();
  delay(500);
  SetAuxLEDs(0);
}

void loop()                     // run over and over again
{ 
  SetAuxLEDs(lights-1);
  Serial.print("level = ");
  Serial.println(level);
  CheckButtonsPress();
      if (Button_A)
        state=1; 
      if (Button_A)     
        foodscore--;
      if(level==1) //adolescent chicken
        {
          if(state==1) //when button a is pressed, play animation for adolescent eating
          {
            eating1();
             DisplaySlate();
             delay(100);  
            eating2();
             DisplaySlate();
             delay(100);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(200);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(100);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(100);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(100);
            eating1();
             DisplaySlate();
             delay(100);
            ClearSlate();
            state=0;
          }
        }
      if(level==2) //when button a is pressed, play animation for adult eating
        {
          if(state==1)
          {
            eating4();
             DisplaySlate();
             delay(100);  
            eating5();
             DisplaySlate();
             delay(100);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(200);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(100);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(100);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(100);
            eating4();
             DisplaySlate();
             delay(100);
            ClearSlate();
            state=0;
            foodscore2--;
          }
        }
      if (Button_B)
        state=2;
      if (Button_B)
        waterscore--;
      if(level==1)
        {
          if(state==2) //when button b is pressed, play animation for adolescent drinking
          {
            eating1();
             DisplaySlate();
             delay(100);  
            eating2();
             DisplaySlate();
             delay(100);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(200);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(100);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(100);
            eating3();
             DisplaySlate();
             delay(200);
            eating2();
             DisplaySlate();
             delay(100);
            eating1();
             DisplaySlate();
             delay(100);
            ClearSlate();
            state=0;
          }
        }
      if(level==2) //when button b is pressed, play animation for adult drinking
        {
          if(state==2)
          {
            eating4();
             DisplaySlate();
             delay(100);  
            eating5();
             DisplaySlate();
             delay(100);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(200);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(100);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(100);
            eating6();
             DisplaySlate();
             delay(200);
            eating5();
             DisplaySlate();
             delay(100);
            eating4();
             DisplaySlate();
             delay(100);
            ClearSlate();
            state=0;
            waterscore2--;
          }
        }      
  if(level==1) //adolescent 
    {  
      if((waterscore < 1)&&(foodscore < 1)) 
      {
        level=2;
      }
    }
  if(level==2) //adult
    { 
      if((waterscore2 < 1)&&(foodscore2 < 1))
      {
        level=3; 
      }
    }  
  if(level==1) 
    {
      adolescent();
      DisplaySlate();
    }
  if(level==2) 
    {
      adult();
      DisplaySlate();
    }
  if(level==3) //laying egg animation 
    {
      sittingadult();
      DisplaySlate();
      delay(1000);
      nolongermother();
      DisplaySlate();
      delay(700);
      level++;
    }
  if(level==4) //chicken becomes a ghost and ascends 
    {
      mother();
      delay(700);
      for (int l=0; l<22; l++)
        {
          DrawPx(GoodbyeArray[l].x, GoodbyeArray[l].y, White); //NEED TO FIX THIS
          GoodbyeArray[l].y++;
          //if(GoodbyeArray[l].y > 7)   
        }
      DisplaySlate();
      delay(200);
      ClearSlate(); 
      UpdateMother();
      delay(300);
      level++;
    }
  if(level==5) //cycle begins again with new egg being made
    {
      movingegg1();
      DisplaySlate();
      delay(500);
      ClearSlate();
      movingegg2();
      DisplaySlate();
      delay(500);
      ClearSlate();
      buildegg1();
      DisplaySlate();
      delay(500);
      buildegg2();
      DisplaySlate();
      delay(500);
      buildegg3();
      DisplaySlate();
      delay(500);
      buildegg4();
      DisplaySlate();
      delay(500);
      buildegg5();
      DisplaySlate();
      delay(500);
      start();
      start();
      delay(500);
      DisplaySlate();
      delay(500);
      level=1;
      lights *= 2; //light is added to keep track of number of eggs made
      /*scores are reset for new chicken
      waterscore=3; 
      foodscore=3;
      waterscore2=5;
      foodscore2=5;
      */   
    }   
}
  
void start() //intro, with egg jumping and hatching
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
    DisplaySlate();
      delay(500);
  eggjump();
    DisplaySlate();
      delay(500);
}

void eggjump() //part of intro
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

void adolescent() //level 1
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
  DrawPx(6, 4, Orange);
  DrawPx(4, 5, Yellow);
  DrawPx(5, 5, Yellow);
}

void adult() //level 2
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
  DrawPx(5, 3, Red);
  DrawPx(1, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(6, 4, Yellow);
  DrawPx(4, 5, White);
  DrawPx(5, 5, White);
  DrawPx(4, 6, Red);
  DrawPx(5, 6, Red);
}

void mother() //drawing the ghost chicken
{
 
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  DrawPx(1, 0, White);
  for (int l=0; l<22; l++)
    {
      DrawPx(GoodbyeArray[l].x, GoodbyeArray[l].y, White); 
      /*
      don't know how to make colored, but i'll leave it as white 
      to give a ghost effect which is fine.
      */
    }
}  
    //thank you elana for helping me compress my code with the nested loops!!!
     
void UpdateMother() //taken from Snake Game
{
  for(int i=marker-1; i > 0; i--){;
    GoodbyeArray[i] = GoodbyeArray[i-1];
    }
} 

void movingegg1() //centering egg to being new cycle
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  DrawPx(2, 0, White);
}

void movingegg2()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  DrawPx(3, 0, White);
}

void buildegg1() 
/*
animation to build the entire egg up again.
Took forever, but it looks cool. 
*/
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
}

void buildegg2()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  DrawPx(2, 0, White);
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(5, 0, White);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(5, 1, White);
}

void buildegg3()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
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
}

void buildegg4()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
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
}

void buildegg5()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
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
}

void nolongermother() //shows chicken standing up after laying egg. about to go ghost. 
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
  DrawPx(5, 3, Red);
  DrawPx(1, 4, White);
  DrawPx(4, 4, White);
  DrawPx(5, 4, White);
  DrawPx(6, 4, Yellow);
  DrawPx(4, 5, White);
  DrawPx(5, 5, White);
  DrawPx(4, 6, Red);
  DrawPx(5, 6, Red);
  DrawPx(1, 0, White);
}

void sittingadult() //before chicken lays egg
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(2, 0, White);
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(1, 1, White);
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
  DrawPx(4, 4, Red);
  DrawPx(5, 4, Red);
  delay(100);
  DrawPx(1, 0, White);
}

void eating1() // first motion for feeding/drinking 
/*
these eating and drinking animations probably took the most amount of time
because I really tried to make it obvious what was happening. I re-did the 
animations a bunch of times until I was finally satisfied and the delays
ran smoothly. Elana gave me lots of advice for how it should look as well!
*/
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
  DrawPx(6, 3, Orange);
  DrawPx(5, 4, Yellow);
  DrawPx(6, 4, Yellow);
  DrawPx(5, 5, Yellow);
  DrawPx(6, 5, Yellow);
   if(state==1)
     {
       DrawPx(food1xcoord, food1ycoord, Green);
       DrawPx(food2xcoord, food2ycoord, Green);
     }
   if(state==2)
     {
       DrawPx(water1xcoord, water1ycoord, DimAqua);
       DrawPx(water2xcoord, water2ycoord, DimAqua);
     }
}

void eating2() // second motion for feeding/drinking as adolescent
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
  DrawPx(6, 2, Orange);
  DrawPx(2, 3, Yellow);
  DrawPx(3, 3, Yellow);
  DrawPx(4, 3, Yellow);
  DrawPx(5, 3, Yellow);
  DrawPx(6, 3, Yellow);
  DrawPx(7, 3, Yellow);
  DrawPx(6, 4, Yellow);
  DrawPx(7, 4, Yellow);
    if(state==1)
     {
       DrawPx(food1xcoord, food1ycoord, Green);
       DrawPx(food2xcoord, food2ycoord, Green);
     }
   if(state==2)
     {
       DrawPx(water1xcoord, water1ycoord, DimAqua);
       DrawPx(water2xcoord, water2ycoord, DimAqua);
     }
}

void eating3() // third motion for feeding/drinking as adolescent
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, Yellow);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
  DrawPx(6, 1, Orange);
  DrawPx(1, 2, Yellow);
  DrawPx(2, 2, Yellow);
  DrawPx(3, 2, Yellow);
  DrawPx(4, 2, Yellow);
  DrawPx(5, 2, Yellow);
  DrawPx(6, 2, Yellow);
  DrawPx(7, 2, Yellow);
  DrawPx(2, 3, Yellow);
  DrawPx(3, 3, Yellow);
  DrawPx(4, 3, Yellow);
  DrawPx(5, 3, Yellow);
  DrawPx(6, 3, Yellow);
  DrawPx(7, 3, Yellow);
    if(state==1)
     {
       DrawPx(food1xcoord, food1ycoord, Green);
       DrawPx(food2xcoord, food2ycoord, Green);
     }
   if(state==2)
     {
       DrawPx(water1xcoord, water1ycoord, DimAqua);
       DrawPx(water2xcoord, water2ycoord, DimAqua);
     }
}

void eating4() // first motion for feeding/drinking as adult
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
  DrawPx(5, 3, Red);
  DrawPx(6, 3, Yellow);
  DrawPx(1, 4, White);
  DrawPx(5, 4, White);
  DrawPx(6, 4, White);
  DrawPx(5, 5, White);
  DrawPx(6, 5, White);
  DrawPx(5, 6, Red);
  DrawPx(6, 6, Red);
  if(state==1)
     {
       DrawPx(food1xcoord, food1ycoord, Green);
       DrawPx(food2xcoord, food2ycoord, Green);
     }
   if(state==2)
     {
       DrawPx(water1xcoord, water1ycoord, DimAqua);
       DrawPx(water2xcoord, water2ycoord, DimAqua);
     }
}

void eating5() // second motion for feeding/drinking as adult
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
  DrawPx(5, 1, Red);
  DrawPx(1, 2, White);
  DrawPx(2, 2, White);
  DrawPx(3, 2, White);
  DrawPx(4, 2, White);
  DrawPx(5, 2, Red);
  DrawPx(6, 2, Yellow);
  DrawPx(1, 3, White);
  DrawPx(2, 3, White);
  DrawPx(3, 3, White);
  DrawPx(4, 3, White);
  DrawPx(5, 3, White);
  DrawPx(6, 3, White);
  DrawPx(1, 4, White);
  DrawPx(5, 4, White);
  DrawPx(6, 4, White);
  DrawPx(5, 5, Red);
  DrawPx(6, 5, Red);
  if(state==1)
     {
       DrawPx(food1xcoord, food1ycoord, Green);
       DrawPx(food2xcoord, food2ycoord, Green);
     }
   if(state==2)
     {
       DrawPx(water1xcoord, water1ycoord, DimAqua);
       DrawPx(water2xcoord, water2ycoord, DimAqua);
     }
}

void eating6() // third motion for feeding/drinking as adult
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, Red);
  DrawPx(5, 1, Red);
  DrawPx(6, 1, Yellow);
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
  DrawPx(5, 4, Red);
  DrawPx(6, 4, Red);
  if(state==1) //if a button is pressed, draw the 2 pixels in the corner green
     {
       DrawPx(food1xcoord, food1ycoord, Green); 
       DrawPx(food2xcoord, food2ycoord, Green);
     }
   if(state==2) //if b button is pressed, draw the 2 pixels in the corner blue
     {
       DrawPx(water1xcoord, water1ycoord, DimAqua);
       DrawPx(water2xcoord, water2ycoord, DimAqua);
     }
}
