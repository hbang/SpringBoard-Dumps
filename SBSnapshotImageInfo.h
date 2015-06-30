/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBSnapshotImageInfo : XXUnknownSuperclass {
	BOOL _defaultPNG;
	NSString *_path;
	UIScreen *_screen;
	float _scale;
	int _launchingOrientation;
	int _originalOrientation;
}
@property(assign, nonatomic) BOOL defaultPNG;
@property(assign, nonatomic) int launchingOrientation;
@property(assign, nonatomic) int originalOrientation;
@property(copy, nonatomic) NSString *path;
@property(assign, nonatomic) float scale;
@property(retain, nonatomic) UIScreen *screen;
+ (id)snapshotImageInfoWithPath:(id)path launchingOrientation:(int)orientation originalOrientation:(int)orientation3 forScreen:(id)screen;
- (id)_stringForInterfaceOrientation:(int)interfaceOrientation;
- (void)dealloc;
- (id)description;
@end

