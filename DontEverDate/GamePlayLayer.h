//
//  GamePlayLayer.h
//  DontEverDate
//
//  Created by Michael Place on 2/3/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


#import <GameKit/GameKit.h>
#import "cocos2d.h"
#import "HUDLayer.h"
@interface GamePlayLayer: CCLayerColor
{
    HUDLayer * _hud;
    
    NSMutableArray * _enemies;
    NSMutableArray * _projectiles;
    int _enemiesDestroyed;
    CCSprite *_player;
    CCSprite *_nextProjectile;
    CCAction *_moveAction;
    BOOL _moving;
}

@property (nonatomic, retain) CCAction *moveAction;
@property (nonatomic, retain) CCSprite *player;

// returns a CCScene that contains the GamePlayLayer as the only child
+(CCScene *) scene;

- (id)initWithHUD:(HUDLayer *)hud;


@end
