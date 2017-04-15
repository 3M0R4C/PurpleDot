//
//  GameScene.h
//  PurpleDot
//
//  Created by Esteban Mora on 4/14/17.
//  Copyright © 2017 Esteban Mora. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>

@interface GameScene : SKScene

@property (nonatomic) NSMutableArray<GKEntity *> *entities;
@property (nonatomic) NSMutableDictionary<NSString*, GKGraph *> *graphs;

@end
