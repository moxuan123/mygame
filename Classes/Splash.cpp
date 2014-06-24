//
//  Splash.cpp
//  MyGame
//
//  Created by 张国兵 on 14-6-3.
//
//

#include "Splash.h"
#include "GameMenu.h"
USING_NS_CC;
bool Splash::init()
{
  if(!Layer::init())
    return false;
  Sprite* spt = NULL;
  if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID) {
    
  }
  spt = Sprite::create("img/flappybird.png");
  Size size = Director::getInstance()->getVisibleSize();
  spt->setPosition(Point(size.width/2,size.height/2));
  this->addChild(spt);
  scheduleOnce(schedule_selector(Splash::callback), 3.0f);
  return true;
}

Scene* Splash::scene()
{
  auto* scene = Scene::create();
  Splash* splash = Splash::create();
  scene->addChild(splash);
  return scene;
}

void Splash::callback(float dt)
{
  log("callback%f",dt);
  auto scene = GameMenu::scene();
  Director::getInstance()->replaceScene(scene);
}