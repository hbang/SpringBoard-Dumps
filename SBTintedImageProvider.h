/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, CALayer, UIImage;

__attribute__((visibility("hidden")))
@interface SBTintedImageProvider : XXUnknownSuperclass {
	UIImage *_tintedImage;
	CALayer *_tintedLayer;
	BOOL _wantsTintedLayer;
	UIImage *_originalImage;
	UIColor *_tintColor;
}
@property(retain, nonatomic) UIImage *originalImage;
@property(retain, nonatomic) UIColor *tintColor;
@property(readonly, assign, nonatomic) UIImage *tintedImage;
@property(readonly, assign, nonatomic) CALayer *tintedLayer;
@property(assign, nonatomic) BOOL wantsTintedLayer;
- (void)_createOrUpdateTintedImageOrLayer;
- (void)dealloc;
@end

