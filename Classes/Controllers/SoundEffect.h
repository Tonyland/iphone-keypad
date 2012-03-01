//
//  SoundEffect.h
//  Keypad
//
//  Created by Adrian on 10/16/08
//  Converted to iOS 5/XCode 4.2/ARC and streamlined by Craig Patchett on 2/8/12.
//  Copyright (c) 2008 - 2012. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioServices.h>

@interface SoundEffect : NSObject 
{
    SystemSoundID _soundID;
}

+ (id)soundEffectWithContentsOfFile:(NSString *)aPath;
- (id)initWithContentsOfFile:(NSString *)path;
- (void)play;

@end
