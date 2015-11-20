//
//  Deck.h
//  Matchismo
//
//  Created by Supreme on 15/11/20.
//  Copyright (c) 2015年 CS193p. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;
@end
