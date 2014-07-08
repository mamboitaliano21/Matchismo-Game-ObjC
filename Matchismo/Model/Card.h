//
//  Card.h
//  Matchismo
//
//  Created by Denis Thamrin on 26/11/2013.
//  Copyright (c) 2013 Denis Thamrin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

//this is a property like a struct
//property automatically decalres getter and setter */

@property (strong,nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;
    // (type)functionname : type argument;
    // delcaring a method (function)
- (int)match:(NSArray *)otherCards;

@end