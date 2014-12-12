#include <MeggyJrSimple.h>

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();   // Required code, line 2 of 2.
}

void loop()                     // run over and over again
{
  start();
  DisplaySlate();
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

void hatchedegg()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(2, 0, White);
  DrawPx(5, 0, White);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
}

void nomoreshell()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
}

void adolescent()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
  DrawPx(i, m, Blue);
  DrawPx(3, 0, Orange);
  DrawPx(2, 1, Yellow);
  DrawPx(3, 1, Yellow);
  DrawPx(4, 1, Yellow);
  DrawPx(2, 2, Yellow);
  DrawPx(3, 2, Yellow);
  DrawPx(4, 2, Yellow);
  DrawPx(3, 3, Yellow);
  DrawPx(4, 3, Yellow);
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


void egg
void 



*/ 








