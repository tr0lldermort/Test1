/*
 * My first class template
 * Author:  dTb
 * Date:    11/03/19
 */

#ifndef myTemplate_h
#define myTemplate_h

#include <Particle.h>   // not sure if this needs to be included here, gonna anyway JIC

#define VAL1 10

class myFirstClass
{
  public:   //funcs and vars that can be accessed from outside the instance of class
    myFirstClass(int val); // constructor, used to create an instance of this class. no return type.
    void foo();
    void bar();
    int pass(int thesalt);
    int hello;

  private:
    int _val; // underscores are used to differentiate between priv and pub variables
    int _world;
};

void func(void);
//int eyar; // defined elsewhere looooool


#endif