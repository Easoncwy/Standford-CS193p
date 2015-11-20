//
//  Card.h
//  Matchismo
//
//  Created by Supreme on 15/11/19.
//  Copyright (c) 2015年 CS193p. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic)NSString *contents;
@property (nonatomic,getter=isChosen)BOOL chosen;
@property (nonatomic,getter=isMatched)BOOL matched;

- (int)match:(NSArray *)otherCards;


@end
