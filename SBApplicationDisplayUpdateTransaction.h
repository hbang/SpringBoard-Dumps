/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBApplicationDisplayUpdateTransaction : XXUnknownSuperclass {
	SBApplication *_app;
	FBApplicationProcess *_process;
	unsigned _sceneState;
	NSDictionary *_displaysToLayouts;
}
- (id)initWithApplication:(id)application process:(id)process displaysToLayouts:(id)layouts state:(unsigned)state;
- (id)_customizedDescriptionProperties;
- (void)_willBegin;
- (void)dealloc;
@end

