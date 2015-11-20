//
//  PlayingCard.h
//  Matchismo
//
//  Created by Supreme on 15/11/19.
//  Copyright (c) 2015年 CS193p. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong,nonatomic)NSString *suit;
@property (nonatomic)NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
