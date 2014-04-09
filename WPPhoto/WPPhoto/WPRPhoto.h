//
//  WPRPhoto.h
//  WPPhoto
//
//  Created by Cory D. Wiles on 4/9/14.
//  Copyright (c) 2014 WayPaver. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPRPhoto : NSObject

@property (nonatomic, strong) NSData *image;
@property (nonatomic, strong) FFGeoLocation *geo;

@end
