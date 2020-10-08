#include <robot.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   droite();
   ramasser();
   gauche();
   deposer();
   
   
   repeat(2)
   {
      droite();
   }
   ramasser();
   repeat(2)
   {
      gauche();
   }
   deposer();
   
   
   repeat(3)
   {
      droite();
   }
   ramasser();
   repeat(3)
   {
      gauche();
   }
   deposer();
  
   
   repeat(4)
   {
      droite();
   }
   ramasser();
   repeat(4)
   {
      gauche();
   }
   deposer();
 
   repeat(5)
   {
      droite();
   }
   ramasser();
     repeat(5)
   {
      gauche();
   }
   deposer();
   
   repeat(6)
   {
      droite();
   }
   ramasser();
   repeat(6)
   {
      gauche();
   }
   deposer();
   
   repeat(7)
   {
      droite();
   }
   ramasser();
     repeat(7)
   {
      gauche();
   }
   deposer();
   
   repeat(8)
   {
      droite();
   }
   ramasser();
   repeat(8)
   {
      gauche();
   }
   deposer();
   
   repeat(9)
   {
      droite();
   }
   ramasser();
   repeat(9)
   {
      gauche();
   }
   deposer();
   
   repeat(10)
   {
      droite();
   }
   ramasser();
     repeat(10)
   {
      gauche();
   }
   deposer();
   return (0);
}
