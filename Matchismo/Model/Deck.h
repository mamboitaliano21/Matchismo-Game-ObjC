//
//  Deck.h
//  Matchismo
//
//  Created by Denis Thamrin on 29/11/2013.
//  Copyright (c) 2013 Denis Thamrin. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
