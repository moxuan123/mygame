//
//  Splash.h
//  MyGame
//
//  Created by 张国兵 on 14-6-3.
//
//

#ifndef __MyGame__Splash__
#define __MyGame__Splash__

#include <iostream>
#include "cocos2d.h"

class Splash : public cocos2d::Layer
{
public:
  virtual bool init();
  CREATE_FUNC(Splash);
  void callback(float dt);
  static cocos2d::Scene* scene();
};

#endif /* defined(__MyGame__Splash__) */
