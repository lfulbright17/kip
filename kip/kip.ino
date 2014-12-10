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
  DrawPx(3, 0, White);
  DrawPx(4, 0, White);
  DrawPx(3, 1, White);
  DrawPx(4, 1, White);
}


