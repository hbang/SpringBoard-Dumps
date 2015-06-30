/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBWindowContextManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBWindowContextManager : XXUnknownSuperclass {
	id<SBWindowContextManagerDelegate> _delegate;
	NSString *_identifier;
	NSHashTable *_observers;
	NSMapTable *_screenToOrderedContexts;
}
@property(assign, nonatomic) id<SBWindowContextManagerDelegate> delegate;
@property(copy, nonatomic) NSString *identifier;
- (void)addContext:(id)context;
- (void)addObserver:(id)observer;
- (id)contextWithIdentifier:(unsigned)identifier screen:(id)screen;
- (id)contextsForScreen:(id)screen;
- (void)dealloc;
- (id)description;
- (unsigned)numberOfContextsForScreen:(id)screen;
- (void)removeContext:(id)context;
- (void)removeObserver:(id)observer;
- (id)trackedScreens;
@end

