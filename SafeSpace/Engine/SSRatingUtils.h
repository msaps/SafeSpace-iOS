//
//  SSRatingUtils.h
//  SafeSpace
//
//  Created by Rob Frampton on 24/10/2015.
//  Copyright © 2015 Team Moonflop. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSRatingUtils : NSObject

+ (float) getRatingAtLatitude:(float)latitude longitude:(float)longitude crimesList:(NSArray *)crimes;

+ (int) getCrimesInAreaAtLatitude:(float)latitude longitude:(float)longitude crimesList:(NSArray *)crimes;

@end
