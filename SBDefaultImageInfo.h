/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBDefaultImageInfo : XXUnknownSuperclass {
	BOOL _hasSnapshot;
	int _launchingInterfaceOrientation;
	float _launchingScale;
	int _originalOrientation;
	int _currentOrientation;
	UIImage *_image;
	CGSize _launchingScreenSize;
}
@property(assign, nonatomic) int currentOrientation;
@property(assign, nonatomic) BOOL hasSnapshot;
@property(retain, nonatomic) UIImage *image;
@property(assign, nonatomic) int launchingInterfaceOrientation;
@property(assign, nonatomic) float launchingScale;
@property(assign, nonatomic) CGSize launchingScreenSize;
@property(assign, nonatomic) int originalOrientation;
- (void)dealloc;
- (id)description;
@end

