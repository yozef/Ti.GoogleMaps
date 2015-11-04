/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <GoogleMaps/GoogleMaps.h>
#import "TiUtils.h"

@interface DeHansknoechelGooglemapsCircleProxy : TiProxy {
    GMSCircle *circle;
}

@property(nonatomic,retain) GMSMutablePath *path;

-(GMSCircle*)circle;

@end
