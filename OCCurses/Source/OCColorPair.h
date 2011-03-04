//
//  OCColorPair.h
//  OCCurses
//
//  Created by Itai Ferber on 3/2/11.
//  Copyright 2011 Itai Ferber. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <curses.h>
#import "OCAttribute.h"
#import "OCColor.h"

/*!
 @class OCColorPair
 @discussion OCColorPair is a wrapper for color pairs that is meant to be used as a text attribute 
 (hence the inheritance). Color pairs have an identifier (starting at 1 and going upward - generated
 using a static identifier variable incremented every time a color is initialized), a foreground 
 color, and a background color. Once color pairs are initialized, they can be applied like any other
 text attribute using their identifiers.
 */
@interface OCColorPair : OCAttribute {
	OCColor *foregroundColor;
	OCColor *backgroundColor;
}

#pragma mark Properties
@property (readonly) OCColor *foregroundColor;
@property (readonly) OCColor *backgroundColor;

#pragma mark Initializers
/*!
 Creates a new color pair with a statically created identifier.
 @param aForeground the foreground color to use
 @param aBackground the background color to use
 @returns an autoreleased color pair object
 */
+ (id)colorPairWithForegroundColor:(OCColor *)aForeground background:(OCColor *)aBackground;

/*!
 Initializes a new color pair with a statically created identifier.
 @param aForeground the foreground color to use
 @pstsm aBackground a background color to use
 @returns an initialized color pair object
 */
- (id)initWithForegroundColor:(OCColor *)aForeground background:(OCColor *)aBackground;

@end