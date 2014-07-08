//
//  PlayingCard.h
//  Matchismo
//
//  Created by Denis Thamrin on 26/11/2013.
//  Copyright (c) 2013 Denis Thamrin. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
