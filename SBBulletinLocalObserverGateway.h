/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BBObserverDelegate.h"


__attribute__((visibility("hidden")))
@interface SBBulletinLocalObserverGateway : XXUnknownSuperclass <BBObserverDelegate> {
	BBObserver *_bbObserver;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
@end

