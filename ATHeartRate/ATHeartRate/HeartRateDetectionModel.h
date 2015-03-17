//
//  HeartRateDetection.h
//  ATHeartRate
//
//  Created by Brandon Lehner on 3/16/15.
//  Copyright (c) 2015 Brandon Lehner. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HeartRateDetectionModelDelegate

- (void)heartRateStart;
- (void)heartRateUpdate:(int)bpm atTime:(int)seconds;
- (void)heartRateEnd;

@end

@interface HeartRateDetectionModel : NSObject

@property (nonatomic, weak) id<HeartRateDetectionModelDelegate> delegate;

- (void)startDetection;
- (void)stopDetection;

@end