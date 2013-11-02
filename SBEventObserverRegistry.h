/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBEventObserverRegistry : XXUnknownSuperclass {
	void *_provider;
	NSMutableDictionary *_observers;
}
+ (id)sharedInstance;
- (id)init;
- (void)addObserverWithToken:(unsigned long long)token forEvent:(id)event;
- (void)handleEvent:(id)event token:(unsigned long long)token action:(void *)action;
- (void)postEventToInterestedObservers:(CFStringRef)interestedObservers;
- (void)removeObserverWithToken:(unsigned long long)token forEvent:(id)event;
- (void)setValue:(BOOL)value forState:(CFStringRef)state;
@end

