#include <MeggyJrSimple.h>

int level = 1; //level 1 is intro through adolescent
int state = 0; //no buttons being pressed
int food1xcoord = 6;
int food1ycoord = 0;
int food2xcoord = 7;
int food2ycoord = 0;
int water1xcoord = 6;
int water1ycoord = 0;
int water2xcoord = 7;
int water2ycoord = 0;
int foodscore = 1;
int waterscore = 1;
int foodscore2 = 1;
int waterscore2 = 1;
int lights = 2;


struct Point
{
 int x;
 int y;

};

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
          if(state==1) //when button a is pressed
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
      if(level==2) //adult chicken
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
          if(state==2)
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
      if(level==2)
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
        
  if(level==1)
    {  
      if((waterscore < 1)&&(foodscore < 1))
      {
        level=2;
      }
    }
  
  if(level==2)
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
  if(level==3) 
    {
      sittingadult();
      DisplaySlate();
      delay(1000);
      nolongermother();
      DisplaySlate();
      delay(700);
      level++;
   
    }
  if(level==4) 
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
    
  if(level==5) 
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
      lights *= 2;
      waterscore=3;
      foodscore=3;
      waterscore2=5;
      foodscore2=5;
        
    }
    
}
    
    
  
  
  
  
  
  
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
    DisplaySlate();
      delay(500);
  eggjump();
    DisplaySlate();
      delay(500);
 
}


/*void splitegg()
{
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  for (int l=0; l<14; l++)
  {
    DrawPx(LeftEggArray[l].x, LeftEggArray[l].y, White);
  }//thank you elana for helping me compress my code with i!!!
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
  DrawPx(6, 4, Orange);
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

void mother()
{
 
  for(int c= 0; c<8; c++)
    for(int d= 0; d<8; d++)
      DrawPx(c, d, Blue);
  DrawPx(1, 0, White);
  for (int l=0; l<22; l++)
    {
      DrawPx(GoodbyeArray[l].x, GoodbyeArray[l].y, White); //NEED TO FIX THIS
    }
}
    
    //thank you elana for helping me compress my code with nested loops!!!
     


void UpdateMother()

{
  for(int i=marker-1; i > 0; i--){;
    GoodbyeArray[i] = GoodbyeArray[i-1];
    }
} 

void movingegg1()
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

void nolongermother()
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

void sittingadult()
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


/*

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

pseudocode ----------------------------------


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








