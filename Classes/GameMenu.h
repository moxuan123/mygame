//
//  GameMenu.h
//  MyGame
//
//  Created by 张国兵 on 14-6-3.
//
//

#ifndef __MyGame__GameMenu__
#define __MyGame__GameMenu__

#include <iostream>
#include "cocos2d.h"

class GameMenu :public cocos2d::Layer
{
public:
  static cocos2d::Scene* scene();
  bool init();
  CREATE_FUNC(GameMenu);
  void menuCallback(cocos2d::Ref sender);
  
};

#endif /* defined(__MyGame__GameMenu__) */
