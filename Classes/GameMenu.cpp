//
//  GameMenu.cpp
//  MyGame
//
//  Created by 张国兵 on 14-6-3.
//
//

#include "GameMenu.h"

USING_NS_CC;

Scene* GameMenu::scene()
{
  Scene* scene = Scene::create();
  auto layer = GameMenu::create();
  scene->addChild(layer);
  return scene;
}

bool GameMenu::init()
{
  Size originSize = Director::getInstance()->getVisibleSize();
  Point originPoint = Director::getInstance()->getVisibleOrigin();
  Size winSize = Director::getInstance()->getWinSize();
  if(!Layer::init())
  {
    return false;
  }
  
  Sprite* bg = Sprite::create("img/bg.png");
  bg->setPosition(originSize.width/2,originSize.height/2);
  bg->setScale(MAX(winSize.width/bg->getContentSize().width, winSize.height/bg->getContentSize().height));
  this->addChild(bg);
  
  Sprite* fbTitle = Sprite::create("img/flappybird.png");
  fbTitle->setPosition(originSize.width/2,originSize.height/4);
  this->addChild(fbTitle);
  
  Sprite* bird = Sprite::create();
  bird->setPosition(originSize.width/2,originSize.height/2);
  this->addChild(bird);
  
//  vect<Animation*> *animations = new vect<Animation*>();
//  animations->add
  Animation* animation = Animation::create();
  for (int i = 1; i<=3; i++) {
    char frameName[100] = {0};
    sprintf(frameName, "img/bird%d.png",i);
    animation->addSpriteFrameWithFile(frameName);
    log("img:%s--111:%s",frameName,"hahha");
  }
  animation->setDelayPerUnit(0.2f);
  animation->setRestoreOriginalFrame(false);
  Animate* animate = Animate::create(animation);
  auto repeat = RepeatForever::create(animate);
  bird->runAction(repeat);
  
  return true;
}

void GameMenu::menuCallback(Ref sender)
{
  
}
