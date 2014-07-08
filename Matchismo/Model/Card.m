//
//  Card.m
//  Matchismo
//
//  Created by Denis Thamrin on 26/11/2013.
//  Copyright (c) 2013 Denis Thamrin. All rights reserved.
//

#import "Card.h"

@implementation Card
//method called match
- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    
    for (Card *card in otherCards) {
        //why not self.contents isEqualtoString self.contents
        //card is given cards, self is yourself
        //remember every class in also an object
        if ([card.contents isEqualToString:self.contents]){
            score = 1;
        }
    }
    return score;
}

@end
