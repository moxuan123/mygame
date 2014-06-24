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
  
  Sprite* bird = Sprite::create("img/bird1.png");
  bird->setPosition(originSize.width/2,originSize.height/2);
  this->addChild(bird);
  
//  vect<Animation*> *animations = new vect<Animation*>();
//  animations->add
//  Animate* animate = Animation::create(<#const Vector<cocos2d::AnimationFrame *> &arrayOfAnimationFrameNames#>, <#float delayPerUnit#>)
  
  return true;
}

void GameMenu::menuCallback(Ref sender)
{
  
}
